#include "libft.h"

 size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
        size_t i;
        size_t j;

        j = 0;
        i = 0;
        while (dst[i])
                i++;
        while (src[j] || j < size)
        {
                dst[i + j] = src[j];
                j++;
        }
        dst[i + j] = '\0';
        return (i + j - 1);
}
