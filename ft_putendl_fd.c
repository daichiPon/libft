/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:05:07 by username          #+#    #+#             */
/*   Updated: 2026/05/07 19:14:54 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		i++;
	while (i > INT_MAX)
	{
		write(fd, s, INT_MAX);
		s += INT_MAX;
		i -= INT_MAX;
	}
	if (i > 0)
		write(fd, s, i);
	write(fd, "\n", 1);
}
