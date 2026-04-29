/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 08:02:16 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/04/30 08:34:27 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
    int count;
    count=0;

    while(lst!=NULL)
    {
        lst=lst->next;
        count++;
    }
    return count;
}

int main()
{
    t_list *head;
    t_list *new1;
    t_list *new2;
    head=NULL;
    new1=ft_lstnew("1");
    new2=ft_lstnew("2");
    ft_lstadd_front(&head,new1);
    ft_lstadd_front(&head,new2);
    printf("%d",ft_lstsize(head));
}