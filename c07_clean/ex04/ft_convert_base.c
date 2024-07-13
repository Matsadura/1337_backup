/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:42:33 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/10 19:34:10 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str);
int				ft_atoi_base(char *str, char *base);

int	ft_isvalid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i++] != '\0')
	{
		if (base[i] == ' ' || (base[i] <= 13 && base[i] >= 9)
			|| base[i] == '+' || base[i] == '-')
			return (1);
	}
	if (i == 0 || i == 1)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	_get_size(int nbr, char *base)
{
	unsigned int	magnitude;
	unsigned int	base_len;
	int				size;

	size = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		size++;
	}
	magnitude = 1;
	base_len = ft_strlen(base);
	while ((nbr / magnitude) >= base_len)
		magnitude *= base_len;
	while (magnitude >= 1)
	{
		magnitude /= base_len;
		size++;
	}
	return (size);
}

char	*_assigner(int nbr, char *base, int buff_size, unsigned int magnitude)
{
	char	*buff;
	int		i;
	int		index;

	buff = malloc(buff_size + 1);
	if (buff == NULL)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		buff[i++] = '-';
		nbr *= -1;
	}
	while (magnitude >= 1)
	{
		index = (nbr / magnitude) % ft_strlen(base);
		buff[i++] = base[index];
		magnitude /= ft_strlen(base);
	}
	buff[i] = '\0';
	return (buff);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	unsigned int	magnitude;
	unsigned int	base_len;
	int				size;
	int				flag;
	char			*buff;

	if (ft_isvalid(base) == 1)
		return (NULL);
	base_len = ft_strlen(base);
	flag = 0;
	if (nbr < 0)
	{
		flag = 1;
		nbr *= -1;
	}
	magnitude = 1;
	while ((nbr / magnitude) >= base_len)
		magnitude *= base_len;
	if (flag == 1)
		nbr *= -1;
	size = _get_size(nbr, base);
	buff = _assigner(nbr, base, size, magnitude);
	return (buff);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		new_nbr;

	if (ft_isvalid(base_from) == 1 || ft_isvalid(base_to) == 1)
		return (NULL);
	new_nbr = ft_atoi_base(nbr, base_from);
	str = ft_putnbr_base(new_nbr, base_to);
	return (str);
}
