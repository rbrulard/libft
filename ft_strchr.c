#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	char *s1; //malloc S1

	i = 0;
	while (s[i])
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	i = 0;
	while (s1[i])
	{
		if (s1[i] != ((unsigned char)c))
			i++;
		else 
			return (s1 + i);
	}
	return (0);
}

int main()
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = strchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);

	return(0);
}

