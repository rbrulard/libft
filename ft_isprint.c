int ft_isprint(int c)
{
        if ((unsigned char)c >= 32 && (unsigned char)c <= 126)
                return (1);
        else
                return (0);
}

