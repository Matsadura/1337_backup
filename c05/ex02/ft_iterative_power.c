/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:59:24 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/06 20:25:02 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	i = 1;
	result = 1;
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
