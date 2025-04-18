/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:31:01 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:55:27 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_size;
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1)
		return (NULL);
	s1_size = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = s1_size;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = ft_substr(s1, start, (end - start));
	if (!str)
		return (NULL);
	return (str);
}

/*
int	main(void)
{
	const char	*s1 = "  \t\n---Hello, World!---\n\n  ";
	const char	*set = " \n\t-";
	char		*trimmed;

	trimmed = ft_strtrim(s1, set);
	
	printf("Original : \"%s\"\n", s1);
	printf("Trimmed  : \"%s\"\n", trimmed);

	free(trimmed);
	return (0);
}*/