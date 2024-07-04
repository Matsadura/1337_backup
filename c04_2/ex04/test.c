/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:29:12 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/04 15:49:31 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isvalid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	if (i == 0 || i == 1)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		j = i +1;
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	magnitude;
	unsigned int	base_len;
	int				index;

	if (ft_isvalid(base) == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	base_len = ft_strlen(base);
	magnitude = 1;
	while ((nbr / magnitude) >= base_len)
		magnitude *= base_len;
	while (magnitude >= 1)
	{
		index = (nbr / magnitude) % base_len;
		if (index >= '0' && index <= '9')
			ft_putchar(base[index] + '0');
		else
			ft_putchar(base[index]);
		magnitude /= base_len;
	}
}
