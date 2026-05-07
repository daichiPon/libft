/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstsize.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/30 08:02:16 by username         #+#    #+#              */
/*   Updated: 2026/05/07 16:03:50 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

int	main(void)
{
	t_list	*head;
	t_list	*new1;
	t_list	*new2;

	head = NULL;
	new1 = ft_lstnew("1");
	new2 = ft_lstnew("2");
	ft_lstadd_front(&head, new1);
	ft_lstadd_front(&head, new2);
	printf("%d", ft_lstsize(head));
}
