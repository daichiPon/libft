/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 19:00:15 by username          #+#    #+#             */
/*   Updated: 2026/05/07 17:47:36 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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

static char	*make_word(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (ft_substr(s, 0, len));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
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
		while (*s && *s == c)
			s++;
		str[i] = make_word(s, c);
		if (!str[i])
			return (ft_free_all(str, i));
		while (*s && *s != c)
			s++;
		i++;
	}
	str[i] = NULL;
	return (str);
}

// int	main(void)
// {
// 	char	**result;
// 	size_t	i;

// 	result = ft_split("Hello,,42Tokyo,,,libft", ',');
// 	if (!result)
// 		return (1);
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("result[%zu] = %s\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
