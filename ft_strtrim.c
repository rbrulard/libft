#include <stdlib.h>

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


int ft_check(const char *s)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			count++;
		else 
			count = 0;
		i++;
	}
	return (count);

}

char	*ft_strtrim(char const *s)
{
	int i;
	int start;
	int len;
	char *trim;


	start = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
		len = ft_strlen(s) - (i + ft_check(s));
	if (!(trim = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[i])
	{
		trim[start++] = s[i++];
	}
	start = start - ft_check(s);
	trim[start] = '\0';
	return (trim);
}
