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

int	cw(const char	*str, char c)
{
	size_t	i;
	size_t	cw;

	i = 0;
	cw = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			cw++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (cw);
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
	result = ft_calloc(sizeof(char *), (cw(s, c) + 1));
	if (!result)
		return (NULL);
	result = splitter(s, c, result);
	return (result);
}
