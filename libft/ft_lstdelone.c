/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 19:05:13 by nakamotodai       #+#    #+#             */
/*   Updated: 2026/05/03 01:18:01 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
void ft_lstdelone(t_list *lst,void(*del)(void*))
{
    if(!lst ||!del)
        return ;
    (*del)(lst->content);
    lst->content=NULL;
    free(lst);
}

void del(void *content)
{
    free(content);
}

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
