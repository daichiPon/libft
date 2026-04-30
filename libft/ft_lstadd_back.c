/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 09:37:16 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/04/30 20:36:17 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list**lst,t_list*new)
{
    t_list *current_node;
    if(lst==NULL||new==NULL)
        return;
    if(*lst==NULL)
        return *lst=new;
    current_node=*lst;
    while(current_node->next!=NULL)
    {
        current_node=current_node->next;
    }
    current_node->next=new;
}

// int main()
// {
//     t_list *head;
//     t_list *new1;
//     t_list *new2;
//     t_list *last;

//     head=NULL;
//     new1=ft_lstnew("HELLO");
//     new2=ft_lstnew("WORLD");
//     last=ft_lstnew("LAST");

//     ft_lstadd_front(&head,new1);
//     ft_lstadd_front(&head,new2);
//     ft_lstadd_back(&head,last);
// }