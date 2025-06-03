/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 19:33:21 by daniel            #+#    #+#             */
/*   Updated: 2025/06/03 21:53:55 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
    void	*new_ptr;

    if (new_size == 0)
        return (freec(ptr), NULL);
    if (ptr == NULL)
        return (malloc(new_size));
    if (old_size == new_size)
        return (ptr);
    new_ptr = malloc(new_size);
    if (!new_ptr)
        return (NULL);
    memset(new_ptr, 0, new_size);
    if (old_size < new_size)
        ft_memcpy(new_ptr, ptr, old_size);
    else
        ft_memcpy(new_ptr, ptr, new_size);
    return (freec(ptr), new_ptr);
}
