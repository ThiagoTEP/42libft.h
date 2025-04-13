

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