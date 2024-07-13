/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:35:04 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/13 19:12:25 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr *= -1);
	return (nbr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (ft_abs(max - min)));
	if (*range == NULL)
		return (-1);
	i = min;
	j = 0;
	while (i < max)
	{
		(*range)[j] = i;
		i++;
		j++;
	}
	return (max - min);
}
