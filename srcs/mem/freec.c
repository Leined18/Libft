/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freec.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:51:28 by daniel            #+#    #+#             */
/*   Updated: 2025/06/03 22:01:07 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * freec - Libera la memoria de un puntero y lo establece a NULL.
 * @ptr: Puntero al elemento a liberar.
 *
 * Esta función libera la memoria ocupada por el elemento apuntado por ptr
 * y lo establece a NULL. También lleva un conteo de las liberaciones realizadas.
 * 
 * Retorna el número total de liberaciones realizadas.
 */

int	freec(void *ptr)
{
   static int	freec_count = 0;

    if (ptr)
    {
        free(ptr);
        ptr = NULL;
        freec_count++;
    }
    return (freec_count); 
}