#include "inc/libft.h"

int	main(void)
{
	char	*s;
	char	*s2;
	int		s3;
	char	*b;
	char	*c;

	s = "2";
	b = ft_strtobin(s);
	c = ft_atobin(2);
	ft_printf("%s\n", b);
	ft_printf("%s\n", c);
	s2 = ft_bintostr(b);
	s3 = ft_bintoa(c);
	ft_printf("%s\n", s2);
	ft_printf("%d\n", s3);
	return (0);
}

/*I`ll Back*/