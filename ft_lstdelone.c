/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstdelone.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/01 19:05:13 by username         #+#    #+#              */
/*   Updated: 2026/05/07 15:52:28 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	lst->content = NULL;
	free(lst);
}

// void del(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list *head;
//     t_list *lst1;
//     t_list *lst2;
//     t_list *lst3;

//     head=NULL;

//     lst1=ft_lstnew(ft_strdup("lst1"));
//     lst2=ft_lstnew(ft_strdup("lst2"));
//     lst3=ft_lstnew(ft_strdup("lst3"));

//     ft_lstadd_front(&head,lst1);
//     ft_lstadd_front(&head,lst2);
//     ft_lstadd_front(&head,lst3);

//     ft_lstdelone(lst1,del);

//     while(head->next!=NULL)
//     {
//         printf("%s\n",(char *)head->content);
//         head=head->next;
//     }
//     return 0;
// }
