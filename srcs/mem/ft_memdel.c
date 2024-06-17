#include "libft.h"

void	ft_memdel(int arg, ...)
{
	va_list ap;
	void	*ptr;

    if (arg <= 0)
        return ;
	va_start(ap, arg);
	while (arg--)
	{
		ptr = va_arg(ap, void *);
		if (ptr)
		{
			free(ptr);
			ptr = NULL;
		}
	}
	va_end(ap);
}