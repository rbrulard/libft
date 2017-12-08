int ft_isalpha(int c)
{
	if (((unsigned char)c >= 97 && (unsigned char)c <= 122) 
			|| ((unsigned char)c >= 65 && (unsigned char)c <= 90))
		return (1);
	else
		return (0);
}
