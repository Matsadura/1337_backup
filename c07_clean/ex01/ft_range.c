/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:56:42 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/13 19:10:43 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr *= -1);
	return (nbr);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*range;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (ft_abs(max - min)));
	if (range == NULL)
		return (NULL);
	i = min;
	j = 0;
	while (i < max)
	{
		range[j] = i;
		j++;
		i++;
	}
	return (range);
}
