/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:30:04 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:48:59 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(const char	*str, char c)
{
	size_t	i;
	size_t	countword;

	i = 0;
	countword = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
		countword++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (countword);
}

char	**splitter(char const *s, char c, char **result)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	limit;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		limit = i - start;
		result[j++] = ft_substr(s, start, limit);
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = ft_calloc(sizeof(char *), (countwords(s, c) + 1));
	if (!result)
		return (NULL);
	result = splitter(s, c, result);
	return (result);
}

/*
#include <stdio.h>
int main(void)
{
	char **split = ft_split("a,b,c", ',');
	
	int i = 0;
	while(split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return 0;
}*/