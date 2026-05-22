/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 20:07:22 by dnakamot          #+#    #+#             */
/*   Updated: 2026/05/12 22:11:45 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*str;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	total = nmemb * size;
	str = malloc(sizeof(char) * total);
	if (!str)
		return (NULL);
	ft_bzero(str, total);
	return (str);
}

// int	main(void)
// {
// 	int	*res;

// 	res = ft_calloc(0, 0);
// 	printf("%p\n", (void *)res);
// 	free(res);
// 	return (0);
// }
