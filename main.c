/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:39:12 by danpalac          #+#    #+#             */
/*   Updated: 2024/11/08 17:18:57 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_ref(const char *src, t_ref **ref)
{
	t_ref	*new_ref;
	char	*str;

	str = ft_strdup(src);
	if (!str)
		return (NULL);
	new_ref = ft_refnew((void **)&str, "", STRING);
	if (!new_ref)
		return (free_null((void **)&str), NULL);
	ft_refadd(ref, &new_ref, NULL);
	return (str);
}

void	*ft_calloc_ref(int count, size_t size, t_ref **ref)
{
	t_ref	*new_ref;
	void	*memory;
	int		type;

	if (size == sizeof(char))
		type = STRING;
	else if (size == sizeof(int))
		type = INT_ARRAY;
	else if (size == sizeof(char *))
		type = STRING_ARRAY;
	else
		type = 1;
	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	(ft_bzero(memory, count * size), new_ref = ft_refnew(&memory, "", type));
	if (!new_ref)
		return (free_null(&memory), NULL);
	ft_refadd(ref, &new_ref, NULL);
	return (memory);
}

int	main(void)
{
	t_list	*list;
	t_ref	*ref;
	char	*str;
	char	*str2;
	char	**array;

	list = NULL;
	str = ft_strdup_ref("buenas", &ref);
	str2 = ft_strdup_ref("buenas2", &ref);
	array = ft_calloc_ref(5, sizeof(char *), &ref);
	printf("%s\n", str);
	printf("%s\n", str2);
	array[0] = ft_strdup("hola");
	array[1] = ft_strdup("adios");
	array[2] = ft_strdup("buenas");
	array[3] = ft_strdup("noches");
	ft_lstadd_ref(&list, ref);
	ft_lstclear(&list, ft_refdel);
	return (0);
}
