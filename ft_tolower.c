int ft_tolower(int c)
{
        if ((unsigned char)c > 64 && (unsigned char)c < 91)
                return (c + 32);
        else
                return (c);
}

