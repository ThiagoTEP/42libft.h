/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:30:45 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:55:07 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	slen;
	size_t	i;
	char	*strmapi;

	slen = ft_strlen(s);
	strmapi = malloc(sizeof(char) * (slen + 1));
	if (!strmapi)
		return (NULL);
	i = 0;
	while (s[i])
	{
		strmapi[i] = f(i, s[i]);
		i++;
	}
	strmapi[slen] = '\0';
	return (strmapi);
}

/*
#include <ctype.h> // para toupper

char	to_upper_even(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (char)toupper(c);
	return c;
}

int	main(void)
{
	const char	*original = "hello, world!";
	char		*modificada;

	modificada = ft_strmapi(original, to_upper_even);
	
	printf("Original:   %s\n", original);
	printf("Modificada: %s\n", modificada);

	free(modificada);
	return (0);
}*/
