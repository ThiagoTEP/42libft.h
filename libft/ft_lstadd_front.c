/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:32:19 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/21 16:13:57 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
int main(void)
{
	t_list *inicio = NULL;

	t_list *new_node = ft_lstnew(ft_strdup("Node 1"));
	ft_lstadd_front(&inicio, new_node);
	
	new_node = ft_lstnew(ft_strdup("Node 2"));
	ft_lstadd_front(&inicio, new_node);

	//IMPRIMI LISTA
	t_list *lista = inicio;
	while(lista)
	{
		printf("%s\n", (char *)lista->content);
		lista = lista->next;
	}

	t_list *temp;
    while (inicio)
    {
        temp = inicio;
        inicio = inicio->next;
        free(temp->content);  
        free(temp);
    }

	return 0;
}*/