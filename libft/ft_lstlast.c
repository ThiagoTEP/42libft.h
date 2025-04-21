/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:43:06 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/21 19:49:56 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>
int main() {
  
    t_list *head = NULL;

    // Criar alguns nós
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 1")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 2")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 3")));

    t_list *last = ft_lstlast(head);

   
    if (last)
        printf("Last node: %s\n", (char *)last->content);

    return 0;
}*/