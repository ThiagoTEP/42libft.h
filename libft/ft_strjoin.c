/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:30:25 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:49:46 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*strjoin;
	size_t			malloc_size;
	size_t			i;
	size_t			j;

	malloc_size = ((ft_strlen(s1) + ft_strlen(s2)) + 1);
	strjoin = ft_calloc(sizeof(char), malloc_size);
	if (!strjoin)
		return (NULL);
	i = 0;
	while (i < (ft_strlen((const char *)s1)))
	{
		strjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < (malloc_size - 1))
	{
		strjoin[i] = s2[j];
		i++;
		j++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}

/*
void print_str_or_null(char *str) {
    if (str)
        printf("%s\n", str);
    else
        printf("(null)\n");
}

int main(void)
{
	print_str_or_null(ft_strjoin("lib", "ft"));
	return 0;
}*/