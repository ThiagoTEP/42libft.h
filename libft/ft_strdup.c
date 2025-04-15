/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:30:12 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:49:06 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*dup;

	size = ft_strlen(s);
	dup = malloc((sizeof(char) * size) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	if (i == size)
		dup[i] = '\0';
	return (dup);
}

/*
int main(void)
{
	char *s1 = strdup("hello");
    char *s2 = ft_strdup("hello");
    printf("%s %s\n", s1, s2);
    free(s1); free(s2);

	return 0;
}*/