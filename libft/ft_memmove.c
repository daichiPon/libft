/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:14:43 by dnakamot          #+#    #+#             */
/*   Updated: 2026/04/26 00:34:10 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t num)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;
	unsigned char		*buf;

	d = dst;
	s = src;
	i = 0;
	buf = malloc(sizeof(unsigned char) * num);
	if (!buf)
		return (NULL);
	while (i < num)
	{
		buf[i] = s[i];
		i++;
	}
	i = 0;
	while (i < num)
	{
		d[i] = buf[i];
		i++;
	}
	free(buf);
	return (dst);
}
