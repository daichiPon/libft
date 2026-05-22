/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:49:51 by username          #+#    #+#             */
/*   Updated: 2026/05/12 22:13:30 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

static int	check_overflow(size_t s1_len, size_t s2_len)
{
	if (s1_len > __SIZE_MAX__ - s2_len - 1)
		return (1);
	return (0);
}

static void	copy_str(char *dst, char const *src, size_t *i)
{
	size_t	j;

	j = 0;
	while (src[j])
	{
		dst[*i] = src[j];
		(*i)++;
		j++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (check_overflow(s1_len, s2_len))
		return (NULL);
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	i = 0;
	copy_str(str, s1, &i);
	copy_str(str, s2, &i);
	str[i] = '\0';
	return (str);
}
