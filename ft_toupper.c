int ft_toupper(int c)
{
        if ((unsigned char)c > 96 && (unsigned char)c < 123)
                return (c - 32);
        else
                return (c);
}

