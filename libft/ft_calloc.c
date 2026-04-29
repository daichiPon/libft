/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 02:33:23 by dnakamot          #+#    #+#             */
/*   Updated: 2026/04/29 17:09:53 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total;
	void			*call;
	unsigned char	*c;
	size_t			i;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	call = malloc(total);
	if (!call)
		return (NULL);
	c = (unsigned char *)call;
	i = 0;
	while (i < total)
	{
		c[i] = 0;
		i++;
	}
	return (call);
}
