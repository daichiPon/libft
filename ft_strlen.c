/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 00:18:42 by dnakamot          #+#    #+#             */
/*   Updated: 2026/05/14 15:13:56 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	const char	*_s;

	_s = s;
	while (*_s)
	{
		_s++;
	}
	return (_s - s);
}

// int main(void)
// {
// 	char a[]="mojiretudayoyddddddddddddddddd";
// 	size_t num;
// 	num=ft_strlen(a);
// 	printf("%zu",num);
// }