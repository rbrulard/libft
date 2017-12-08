#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char    *dest;

	i = 0;
	dest = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
