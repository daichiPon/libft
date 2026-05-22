/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 00:18:57 by dnakamot          #+#    #+#             */
/*   Updated: 2026/05/12 23:48:37 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	bigi;
	size_t	littlei;

	if (!needle[0])
		return ((char *)haystack);
	bigi = 0;
	while (bigi < len && haystack[bigi])
	{
		littlei = 0;
		while ((bigi + littlei) < len && haystack[bigi
				+ littlei] == needle[littlei])
		{
			littlei++;
			if (needle[littlei] == '\0')
				return ((char *)&haystack[bigi]);
		}
		bigi++;
	}
	return (NULL);
}
