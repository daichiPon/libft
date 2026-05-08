/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/23 02:22:19 by username         #+#    #+#              */
/*   Updated: 2026/05/07 15:51:02 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *buf, size_t size)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = (unsigned char *) buf;
	while (i < size)
	{
		b[i] = 0;
		i++;
	}
}
