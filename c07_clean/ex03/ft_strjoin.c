/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:26:35 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/10 09:19:31 by zzaoui           ###   ########.fr       */
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
	dest[dest_len + index] = '\0';
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

char	*_join(int size, char **strs, char *sep, char *dest)
{
	int	i;

	dest[0] = '\0';
	ft_strcpy(dest, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(dest, sep);
		ft_strcat(dest, strs[i]);
		i++;
	}
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
	new_str = _join(size, strs, sep, new_str);
	return (new_str);
}
