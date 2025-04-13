

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*call;
	size_t	i;

	call = malloc(size * nmemb);
	if (!call)
		return (NULL);
	i = 0;
	while (i < size * nmemb)
	{
		call[i] = '\0';
		i++;
	}
	return (call);
}