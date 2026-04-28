/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:16:43 by dnakamot          #+#    #+#             */
/*   Updated: 2026/04/26 00:33:54 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest  && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (num > 0)
	{
		*d = *s;
		d++;
		s++;
		num--;
	}
	return (dest);
}
