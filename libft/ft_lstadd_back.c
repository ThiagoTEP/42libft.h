/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:45:40 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/21 19:49:36 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
/*
#include <stdio.h>
int main() {
    // Criação de uma lista vazia
    t_list *head = NULL;

    t_list *new_node = ft_lstnew(ft_strdup("Node 1"));
    ft_lstadd_back(&head, new_node);

    new_node = ft_lstnew(ft_strdup("Node 2"));
    ft_lstadd_back(&head, new_node);

    t_list *tmp = head;
    while (tmp) {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    return 0;
}*/