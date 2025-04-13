/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:53:57 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:32:54 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*x;
	const char	*y;
	size_t		i;

	x = s1;
	y = s2;
	i = 0;
	while (i < n)
	{
		if (x[i] == y[i])
			i++;
		else
			return ((unsigned char)x[i] - (unsigned char)y[i]);
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char *x = "testeteste";
	char *y = "testa";

	printf("%d\n", ft_memcmp(x, y, 10));
	
	return 0;
}*/