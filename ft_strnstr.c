#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;


	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}

