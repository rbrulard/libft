int ft_isascii(int c)
{
	if ((unsigned char)c > 0 && (unsigned char)c < 127)
		return (1);
	else
		return (0);
}