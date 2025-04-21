/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:48:18 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/21 19:47:19 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del((lst)->content);
	free(lst);
}
/*
#include <stdio.h>
int main() {
    
    t_list *node = ft_lstnew(ft_strdup("Node to delete"));

    ft_lstdelone(node, free);

    // Verificação após deletar (não deve haver nada impresso)
    if (!node)
        printf("Node was deleted!\n");

    return 0;
}*/