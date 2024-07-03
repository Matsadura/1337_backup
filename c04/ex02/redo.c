/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:52:17 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/03 16:07:11 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	unsigned int magnitude;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}

	magnitude = 1;
	while ((nbr / magnitude) >= 10)
		magnitude *= 10;

	while ( magnitude >= 1)
	{
		ft_putchar((nbr / magnitude) % 10 + '0');
		magnitude /= 10;
	}
}
