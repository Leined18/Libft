
#include "libft.h"

void	*ft_memrev(void *ptr, size_t size)
{
	unsigned char	*begin;
	unsigned char	*end;
	unsigned char	tmp;
	size_t			i;

	begin = (unsigned char *)ptr;
	end = begin + size - 1;
	i = 0;
	while (begin < end)
	{
		tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
		i++;
	}
	return (ptr);
}