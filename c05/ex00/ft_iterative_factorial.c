/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:23:59 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/06 20:24:40 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = nb;
	result = nb;
	while (i > 1)
	{
		result *= i - 1;
		i--;
	}
	return (result);
}
