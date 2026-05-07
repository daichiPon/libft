/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/07 15:49:51 by username         #+#    #+#              */
/*   Updated: 2026/05/07 15:49:57 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i1;
	size_t	i2;
	char	*str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	i1 = 0;
	while (s1_len)
	{
		str[i1] = s1[i1];
		i1++;
		s1_len--;
	}
	i2 = 0;
	while (s2_len)
	{
		str[i1 + i2] = s2[i2];
		i2++;
		s2_len--;
	}
	str[i1 + i2] = '\0';
	return (str);
}
