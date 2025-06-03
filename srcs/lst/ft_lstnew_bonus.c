/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:47:44 by danpalac          #+#    #+#             */
/*   Updated: 2025/06/03 21:53:55 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int main()
{
    t_list	*list;
	t_list	*list2;
	int		lol[] = {1, 4, 5, 6};

    list = ft_lstnew("buenas");
    list2 = ft_lstnew(lol);
    printf("%zu\n", sizeof(t_list));
    printf("%s\n", list->content);
    printf("%s\n", list2->content);
	freec(list);
	return (0);
}*/
