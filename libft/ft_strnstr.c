/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:30:53 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 15:30:56 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_size;

	little_size = ft_strlen(little);
	i = 0;
	if (!little_size)
		return ((char *)big);
	while (big[i] && i < len && i + little_size <= len)
	{
		if (ft_strncmp(&big[i], little, little_size) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    char *x = "teste de string";
    char *y = "tr";

    char *result = ft_strnstr(x, y, 15);

    printf("%s\n", result);

    return 0;
}*/