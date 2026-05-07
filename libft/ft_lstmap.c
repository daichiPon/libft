/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakamotodaichi <nakamotodaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 02:49:23 by username          #+#    #+#             */
/*   Updated: 2026/05/07 16:09:53 by nakamotodai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	void	*new_context;
	t_list	*new_node;

	new_head = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new_context = f(lst->content);
		new_node = ft_lstnew(new_context);
		if (!new_node)
		{
			del(new_context);
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_node);
		lst = lst->next;
	}
	return (new_head);
}

void	*to_upper(void *content)
{
	char	*str;
	char	*new_str;
	int		i;

	str = (char *) content;
	new_str = ft_strdup(str);
	if (!new_str)
		return (NULL);
	i = 0;
	while (new_str[i])
	{
		new_str[i] = ft_toupper(new_str[i]);
		i++;
	}
	return (new_str);
}

void	del_content(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *) lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*lst;
	t_list	*mapped;

	lst = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("world")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("libft")));
	printf("=== original ===\n");
	print_list(lst);
	mapped = ft_lstmap(lst, to_upper, del_content);
	printf("\n=== mapped ===\n");
	print_list(mapped);
	ft_lstclear(&lst, del_content);
	ft_lstclear(&mapped, del_content);
	return (0);
}
