/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:02:57 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:41:10 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	*x;

	j = (unsigned char *) src;
	x = dest;
	i = 0;
	while ((x || j) && i < n)
	{
		x[i] = j[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	char *z = "Teste de envio";
	char l[11];
	
	printf("%s\n", (char *)ft_memcpy(l, z, 10));
}*/