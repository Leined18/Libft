#include "inc/libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[100] = "Hello World!";
	char bin[100] = {0};
	char c = 'j';
	size_t i = 0;

	ft_atobin(c, bin, &i);
	printf("ft_atobin: %s\n", bin);
	i = 0;
	ft_strrev(bin);
	ft_bintoa(bin, &c, &i);
	printf("ft_bintoa: %c\n", c);
	return (0);
}