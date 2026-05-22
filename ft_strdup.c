/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 00:18:16 by dnakamot          #+#    #+#             */
/*   Updated: 2026/05/14 15:11:53 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*str;
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	src_len = ft_strlen(src);
	str = malloc(sizeof(char) * (src_len + 1));
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	char src[]="moji";
// 	char *res;
// 	res=ft_strdup(src);
// 	printf("%s",res);
// }