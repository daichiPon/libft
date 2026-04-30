/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 08:56:30 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/04/30 09:18:36 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

t_list *ft_lstlast(t_list *lst)
{
    if(lst==NULL)
        return NULL;
    while(lst->next!=NULL)
        lst=lst->next;
    return lst;
}

int main()
{
    t_list *head;
    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *last_node;

    head = NULL;

    node1 = ft_lstnew("Hello");
    node2 = ft_lstnew("World");
    node3 = ft_lstnew("42");

    ft_lstadd_front(&head, node1);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    last_node = ft_lstlast(head);

    if (last_node != NULL)
        printf("Last content: %s\n", (char *)last_node->content);

    return (0);
}
