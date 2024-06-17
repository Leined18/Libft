
#include "libft.h"

char	*ft_strrev(const char *str)
{
	char	*reversed;
	size_t	len;
	size_t	i;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	reversed = (char *)malloc(sizeof(char) * (len + 1));
	if (!reversed)
		return (NULL);
	reversed[len] = '\0';
	i = 0;
	while (i < len)
	{
		reversed[i] = str[len - 1 - i];
		i++;
	}
	return (reversed);
}