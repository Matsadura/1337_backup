/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:26:35 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/09 21:07:01 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	index;

	dest_len = ft_strlen(dest);
	index = 0;
	while (src[index] != '\0')
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		malloc_size;
	char	*new_str;

	if (size == 0)
	{
		new_str = malloc(1);
		new_str[0] = '\0';
		return (new_str);
	}
	malloc_size = 0;
	i = 0;
	while (i < size)
	{
		malloc_size += ft_strlen(strs[i]);
		i++;
	}
	malloc_size += (ft_strlen(sep) * (size - 1));
	new_str = malloc(malloc_size + 1);
	if (new_str == NULL)
		return (NULL);
	new_str[0] = '\0';
	ft_strcpy(new_str, strs[0]);
	printf("%s\n", new_str);
	i = 0;
	while (i < size)
	{
		ft_strcat(new_str, sep);
		ft_strcat(new_str, strs[i]);
	printf("%s\n", new_str);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
