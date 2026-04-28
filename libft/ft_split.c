/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 19:00:15 by dnakamot          #+#    #+#             */
/*   Updated: 2026/04/28 03:52:33 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_free_all(char **str, size_t i)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
	return (NULL);
}

size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	flag;

	i = 0;
	count = 0;
	flag = 0;
	while (s && s[i])
	{
		if (s[i] != c && !flag)
		{
			flag = 1;
			count++;
		}
		else if (s[i] == c)
		{
			flag = 0;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	count_word;
	char	**str;

	if (!s)
		return (NULL);
	count_word = ft_count_word(s, c);
	str = malloc(sizeof(char *) * (count_word + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < count_word)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		str[i] = ft_substr(s, 0, len);
		if (!str[i])
			return (ft_free_all(str, i));
		s += len;
		i++;
	}
	str[i] = NULL;
	return (str);
}
