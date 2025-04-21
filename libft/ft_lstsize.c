/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:39:36 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/21 19:54:10 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	if (lst == NULL)
		return (0);
	size = 1;
	while (lst->next != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*
#include <stdio.h>
int main(void)
{
	t_list *lista = NULL;

	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("primeiro")));
	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("segundo")));
	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("terceiro")));

	int tamanho = ft_lstsize(lista);

	printf("Tamanho da lista: %d\n", tamanho);

	ft_lstclear(&lista, free);

	return 0;
}*/