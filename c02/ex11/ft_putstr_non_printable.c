/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:14:50 by zzaoui            #+#    #+#             */
/*   Updated: 2024/06/30 22:42:44 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char c)
{
	int		div;
	int		mod;
	char	*hex;

	hex = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	ft_putchar('\\');
	ft_putchar(hex[div]);
	ft_putchar(hex[mod]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_print_hex((unsigned char) str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
