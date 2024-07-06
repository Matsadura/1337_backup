/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:25:15 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/06 20:25:16 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
