/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:30:31 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 17:16:18 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	i = 0;
	while (dst[i] && i < size)
		i++;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}

/*
#include <stdio.h>
int main(void)
{
    char *x = "teste de string";
    char y[18] = "ola,";

    size_t result = ft_strlcat(y, x, sizeof(y));

    printf("%ld\n", result);
    
	char cat1[10] = "ab"; char cat2[10] = "ab";
    printf("%lu %lu\n", strlcat(cat1, "cd", 10), ft_strlcat(cat2, "cd", 10));
    printf("%s %s\n", cat1, cat2);

    return 0;
}*/