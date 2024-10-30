/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:39:12 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/30 12:39:27 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*single;
	char	**array;

	// Ejemplo de uso con un puntero simple
	single = malloc(10);
	// Ejemplo de uso con un arreglo de punteros
	array = malloc(sizeof(char *) * 3);
	array[0] = malloc(10);
	array[1] = malloc(20);
	array[2] = NULL; // Fin del arreglo
	// Liberar memoria utilizando ft_memdel
	ft_memdel(2, NULL, &single, &array);
	return (0);
}
