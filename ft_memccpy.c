#include <unistd.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	:size_t i;

	i = 0;
	while (i < n)
	{
		if (((const char*)src)[i] != (unsigned char)c)	
		{		
			((char*)dest)[i] = ((const char*)src)[i];
			i++;
		}
		else
			return (dest);
	}
	return (dest);
}
