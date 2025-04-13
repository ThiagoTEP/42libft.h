/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:30:37 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:53:57 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (src[j] != '\0' && j < size - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    char *x = "teste de string";
    char y[18];

    int result = ft_strlcpy(y, x, sizeof(y));

    printf("%d\n", result);
    printf("%ld", strlcpy(y, x, sizeof(y)));

    return 0;
}*/