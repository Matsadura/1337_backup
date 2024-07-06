/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:28:24 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/04 17:49:28 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_whitespace_signs(char *str, int *sign)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\r')
		i++;
	j = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	*sign = j % 2;
	return (&str[i]);
}

int	ft_isvalid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == ' ' || base[i] == '+' || base[i] == '-')
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

int	get_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		index;
	int		result;
	char	*clean_string;

	if (ft_isvalid(base) == 1)
		return (0);
	sign = 0;
	clean_string = ft_whitespace_signs(str, &sign);
	result = 0;
	index = 0;
	while (clean_string[index] != '\0')
	{
		if (get_base_index(clean_string[index], base) == -1)
			break ;
		i = get_base_index(clean_string[index], base);
		result = result * ft_strlen(base) + i;
		index++;
	}
	if (sign == 1)
		return (result *= -1);
	return (result);
}
