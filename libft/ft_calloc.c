/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/25 02:33:23 by username         #+#    #+#              */
/*   Updated: 2026/05/07 15:51:10 by username        ###   ########.fr        */
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
	c = (unsigned char *) call;
	i = 0;
	while (i < total)
	{
		c[i] = 0;
		i++;
	}
	return (call);
}
