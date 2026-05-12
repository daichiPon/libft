/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:14:43 by dnakamot          #+#    #+#             */
/*   Updated: 2026/05/09 03:03:03 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://en.cppreference.com/c/string/byte/memmove

#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t num)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (i < num)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (num > 0)
		{
			num--;
			d[num] = s[num];
		}
	}
	return (dst);
}
