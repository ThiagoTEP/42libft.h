/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:01:05 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/10 15:20:53 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*j;

	i = 0;
	x = (unsigned char *) src;
	j = dest;
	if (j > x)
	{
		while ((x || j) && n != 0)
		{
			j[n - 1] = x[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy (j, x, n);
	}
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	char *z = "Teste de envio";
	char l[10];
	
	printf("%s\n", (char *)ft_memmove(l, z, 4));
	return 0;
}*/