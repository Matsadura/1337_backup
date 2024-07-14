/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:34:39 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/10 19:34:29 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isvalid(char *base);

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

unsigned int	ft_strlen(char *str)
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

int	get_base_index(char c, char *base)
{
	unsigned int	i;

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
