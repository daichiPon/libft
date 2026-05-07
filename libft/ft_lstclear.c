/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/03 00:50:40 by username         #+#    #+#              */
/*   Updated: 2026/05/07 16:06:16 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*node_next;

	current = *lst;
	while (current != NULL)
	{
		node_next = current->next;
		ft_lstdelone(current, del);
		current = node_next;
	}
	*lst = NULL;
}

// void del_clear(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *head;
//     t_list *new1;
//     t_list *new2;

//     head=NULL;
//     new1=ft_lstnew(ft_strdup("list1"));
//     new2=ft_lstnew(ft_strdup("list2"));

//     ft_lstclear(&head,del_clear);
// }
