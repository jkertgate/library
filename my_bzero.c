#include "libft.h"

void	my_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char*)s;
	while (i < n)
		tmp[i++] = '\0';
}