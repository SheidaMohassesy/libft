/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheida <sheida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:16:50 by sheida            #+#    #+#             */
/*   Updated: 2023/11/17 10:26:29 by sheida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>


void *ft_memset(void *ptr, int value, size_t num)
{
    size_t i;
    unsigned char *byte_ptr;

    i = 0;
    *byte_ptr = (unsigned char *)ptr;
    while (i < num)
    {
        byte_ptr[i] = (unsigned char)value;
        ++i;
    }

    return ptr;
}

