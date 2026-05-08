/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 04:19:04 by username          #+#    #+#             */
/*   Updated: 2026/05/07 22:24:36 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next;

	while (lst != NULL)
	{
		next = lst->next;
		f(lst->content);
		lst = next;
	}
}

// void	func(void *content)
// {
// 	content = "nannda";
// 	printf("%s\n", (char *) content);
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new1;
// 	t_list	*new2;
// 	t_list	*new3;
// 	int		num;

// 	num = 8;
// 	head = NULL;
// 	new1 = ft_lstnew("一つめ");
// 	new2 = ft_lstnew("futat");
// 	new3 = ft_lstnew(&num);
// 	ft_lstadd_front(&head, new1);
// 	ft_lstadd_front(&head, new2);
// 	ft_lstadd_front(&head, new3);
// 	ft_lstiter(head, func);
// }
