

#include "libft.h"

/* char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
 */
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