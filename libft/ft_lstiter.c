/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:54:18 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/21 16:19:46 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;
	t_list	*next;

	current = lst;
	while (current)
	{
		next = current->next;
		f(current->content);
		current = next;
	}
}

/*
void print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int main()
{
	t_list *head = ft_lstnew(ft_strdup("Node 1"));

	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 2")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 3")));
	
	ft_lstiter(head, print_content);
	
	return 0;
}*/