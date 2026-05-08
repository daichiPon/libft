/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 00:18:57 by dnakamot          #+#    #+#             */
/*   Updated: 2026/04/26 00:34:34 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bigi;
	size_t	littlei;

	if (!little[0])
		return ((char *)big);
	bigi = 0;
	while (bigi < len && big[bigi])
	{
		littlei = 0;
		while ((bigi + littlei) < len && big[bigi + littlei] == little[littlei])
		{
			littlei++;
			if (little[littlei] == '\0')
				return ((char *)&big[bigi]);
		}
		bigi++;
	}
	return (NULL);
}
