/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_front.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/30 07:45:26 by username         #+#    #+#              */
/*   Updated: 2026/05/07 16:03:04 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (!list || !new)
		return ;
	if (*list == NULL)
	{
		*list = new;
		return ;
	}
	new->next = *list;
	*list = new;
}

// int main()
// {
// 	t_list *head;
// 	t_list *new;
// 	new=ft_lstnew("2");
// 	ft_lstadd_front(&head,new);
// }
