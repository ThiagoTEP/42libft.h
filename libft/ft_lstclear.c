/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:50:05 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/21 19:24:02 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !*lst)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
/*
int main()
{
	t_list *head = ft_lstnew(ft_strdup("Node 1"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 2")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 3")));
	
	printf("%s\n", (char *)head->content);
	
	ft_lstclear(&head, free);
	
	if (!head)
		printf("limpo");
		
	

	return 0;
}*/
