/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:49:51 by username          #+#    #+#             */
/*   Updated: 2026/05/07 18:44:52 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

static int	check_overflow(size_t s1_len, size_t s2_len)
{
	if (s1_len > SIZE_MAX - s2_len - 1)
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