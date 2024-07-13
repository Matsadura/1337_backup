/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:47:17 by zzaoui            #+#    #+#             */
/*   Updated: 2024/07/13 17:34:54 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (-1);
}

int	_count_words(char *string, char *charset)
{
	int	i;
	int	count;
	int	is_word;

	if (string == NULL || sizeof(string) == 0 || string[0] == '\0')
		return (0);
	i = 0;
	count = 0;
	is_word = 0;
	while (string[i])
	{
		if (is_charset(string[i], charset) == 1)
			is_word = 0;
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	*_assigner(int len, char *str)
{
	int		j;
	char	*word;

	word = malloc(len + 1);
	if (word == NULL)
		return (NULL);
	j = 0;
	while (j < len)
	{
		word[j] = str[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**buff;
	char	*start;

	buff = (char **)malloc(sizeof(char *) * _count_words(str, charset) + 1);
	if (buff == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (is_charset(*str, charset) == 1)
			str++;
		else
		{
			start = str;
			while (*str && is_charset(*str, charset) != 1)
				str++;
			buff[i] = _assigner(str - start, start);
			i++;
		}
	}
	buff[i] = NULL;
	return (buff);
}
