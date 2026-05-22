/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnakamot <dnakamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 00:50:40 by username          #+#    #+#             */
/*   Updated: 2026/05/14 15:11:38 by dnakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*node_next;

	current = *lst;
	if (!del)
		return ;
	while (current)
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
