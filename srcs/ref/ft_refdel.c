/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_refdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:34:24 by danpalac          #+#    #+#             */
/*   Updated: 2024/11/08 18:21:57 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_int_array(void **ref)
{
	int	*int_array;

	int_array = (int *)*ref;
	free_null((void **)int_array);
}

// Función para liberar un array de cadenas de texto
static void	free_string_array(void *ref)
{
	char	**string_array;
	int		i;

	string_array = (char **)ref;
	i = 0;
	if (!string_array)
		return ;
	while (string_array[i])
	{
		free_null((void **)&string_array[i]);
		i++;
	}
	free_null((void **)&string_array);
}

static void	free_block_by_type(t_ref **ref)
{
	if (!ref || !(*ref)->ref)
		return ;
	if ((*ref)->type == STRING)
		free_null((void **)&(*ref)->ref);
	else if ((*ref)->type == INT_ARRAY)
		free_int_array((*ref)->addr);
	else if ((*ref)->type == STRING_ARRAY)
		free_string_array((*ref)->ref);
}

void	ft_refdel(void **ref)
{
	t_ref	**temp;

	if (!ref || !*ref)
		return ;
	temp = (t_ref **)ref;
	if ((*temp)->next)
		ft_refdel((void **)&(*temp)->next);
	free_null((void **)&(*temp)->name);
	free_block_by_type(temp);
	(*temp)->addr = NULL;
	(*temp)->id = 0;
	free_null((void **)temp);
	temp = NULL;
}
