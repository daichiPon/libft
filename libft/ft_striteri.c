/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_striteri.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/07 16:05:57 by username         #+#    #+#              */
/*   Updated: 2026/05/07 16:05:58 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = 0;
	while (s[s_len])
		s_len++;
	while (i < s_len)
	{
		f(i, &s[i]);
		i++;
	}
}
