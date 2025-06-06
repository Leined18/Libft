/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:30:41 by danpalac          #+#    #+#             */
/*   Updated: 2025/02/10 11:43:58 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t		dst_len;
	size_t		total_len;
	const char	*s;

	if (!dst || !src)
		return (0);
	s = src;
	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	if (dst_len < dstsize)
		total_len = dst_len + ft_strlen(s);
	else
		return (dstsize + ft_strlen(s));
	while (*s && (dst_len + 1) < dstsize)
	{
		*(dst + dst_len) = *s++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (total_len);
}
/*
int	main(void)
{
	char src[] = "buenas";
	char dst[] = "t";
	size_t result;

	result = ft_strlcat(dst,src,sizeof(dst));
	printf("%zu\n%s\n%s\n",result, dst, src);
	return (0);
}*/
