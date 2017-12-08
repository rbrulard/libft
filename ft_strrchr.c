
#include "libft.h"

char 	*ft_strrchr(const char *s, int c)
{
	int i;
	char *s1; //malloc s1

	i = 0;
	while (s[i])
	{
		s1[i] = s[i];
		i++;
	}

	i = i - 1;
	while (i >= 0)
	{
		if (s1[i] != ((unsigned char)c))
			i--;
		else
			return (s1 + i);
	}
	return (0);
}
