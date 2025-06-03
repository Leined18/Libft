/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atobin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:38:40 by danpalac          #+#    #+#             */
/*   Updated: 2025/06/03 21:53:55 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy_bin(char *bin, char *char_bin, size_t *j)
{
	size_t	k;

	k = 0;
	while (k < 8)
	{
		bin[*j] = char_bin[k];
		(*j)++;
		k++;
	}
	freec(char_bin);
}

char	*ft_atobin(const char *str)
{
	size_t	len;
	char	*bin;
	char	*char_bin;
	size_t	i;
	size_t	j;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	bin = malloc(8 * len + 1);
	if (!bin)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < len)
	{
		char_bin = ft_char2bin((unsigned char)str[i]);
		if (!char_bin)
			return (freec(bin), NULL);
		copy_bin(bin, char_bin, &j);
	}
	bin[j] = '\0';
	return (bin);
}
