#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char *tmp;

	i = 0;
	while (i < n)
	{
		tmp[i] = ((char*)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char*)dest)[i] = tmp[i];
		i++;
	}
	return (dest);
}

int main ()
{
	char dest[] = "oldstring";
	const char src[]  = "newstring";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	return(0);
}
