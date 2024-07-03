/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:52:33 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/03 22:10:47 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_isspace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	return (&str[i]);
}

int	ft_sign(char *str)
{
	int	sign;
	int	index;

	sign = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == '-')
			sign++;
		index++;
	}
	if (sign % 2 == 1)
		return (1);
	return (0);
}

char	*ft_skip_signs(char *str)
{
	int	index;

	index = 0;
	while (str[index] == '-' || str[index] == '+')
	{
		index++;
	}
	return (&str[index]);
}

int	ft_atoi(char *str)
{
	int		sign;
	int		index;
	int		result;
	char	*clean_string;

	clean_string = ft_isspace(str);
	sign = ft_sign(clean_string);
	clean_string = ft_skip_signs(clean_string);
	result = 0;
	index = 0;
	while (clean_string[index] >= '0' && clean_string[index] <= '9')
	{
		result = result * 10;
		result += clean_string[index] - '0';
		index++;
	}
	if (sign == 1)
		return (result *= -1);
	return (result);
}
