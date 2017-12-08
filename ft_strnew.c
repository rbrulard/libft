#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t i;
	char *str;

	i = 0;
	if (!((char)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
