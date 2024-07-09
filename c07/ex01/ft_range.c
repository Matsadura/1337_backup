/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:56:42 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/09 15:01:30 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*range;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
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
