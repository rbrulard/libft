#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{

	size_t i;
	char *new;

	i = 0;
	if (!(new = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);

	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
