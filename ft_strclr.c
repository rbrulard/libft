void ft_strclr(char *s)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (s[i])
		i++;
	while (j < i)
	{
		s[j] = '\0';
		j++;
	}
}
