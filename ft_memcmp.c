/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:26:29 by username          #+#    #+#             */
/*   Updated: 2026/05/09 18:11:26 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) s1;
	s = (unsigned char *) s2;
	while (n > 0)
	{
		if (*d != *s)
			return (*d - *s);
		d++;
		s++;
		n--;
	}
	return (0);
}
