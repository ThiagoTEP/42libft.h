/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:30:04 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/19 12:48:01 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

char	**allocate_result(const char *s, char c)
{
	char	**result;
	int		word_count;

	word_count = countwords(s, c);
	result = ft_calloc(word_count + 1, sizeof(char *));
	return (result);
}

int	extract_words(char **result, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		result[j] = ft_substr(s, start, i - start);
		if (!result[j])
			return (0);
		j++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;

	if (!s)
		return (NULL);
	result = allocate_result(s, c);
	if (!result)
		return (NULL);
	if (!extract_words(result, s, c))
	{
		i = 0;
		while (result[i])
			free(result[i++]);
		free(result);
		return (NULL);
	}
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