#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_memalloc(size_t size)
{
	char *mem;
	int i;

	i = 0;
	if (!(mem = malloc(sizeof(char)*size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
