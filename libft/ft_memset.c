/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 02:06:16 by dnakamot          #+#    #+#             */
/*   Updated: 2026/04/26 00:34:17 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *buf1, int c, size_t bit)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = (unsigned char *)buf1;
	while (i < bit)
	{
		b[i] = (unsigned char)c;
		i++;
	}
	return (buf1);
}
