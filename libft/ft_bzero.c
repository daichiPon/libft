/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 02:22:19 by dnakamot          #+#    #+#             */
/*   Updated: 2026/04/25 21:31:56 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *buf, size_t size)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = (unsigned char *)buf;
	while (i < size)
	{
		b[i] = 0;
		i++;
	}
}
