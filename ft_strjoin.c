#include <stdlib.h>

int ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char	*ft_strjoin(char const *s1, char const*s2)
{
	int len;
	int i;
	int j;
	char *join;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(join = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);	
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		join[i + j] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);

}
