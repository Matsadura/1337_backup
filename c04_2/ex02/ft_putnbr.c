/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:41:31 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/04 14:48:33 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	unsigned int	nbr_length;

	nbr_length = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	while ((nbr / nbr_length) >= 10)
		nbr_length *= 10;
	while (nbr_length >= 1)
	{
		ft_putchar((nbr / nbr_length) % 10 + '0');
		nbr_length /= 10;
	}
}
