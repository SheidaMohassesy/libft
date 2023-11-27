/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheida <sheida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:53:55 by sheida            #+#    #+#             */
/*   Updated: 2023/11/23 12:14:07 by sheida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t i;
	size_t j;
	size_t src_len;
	size_t dest_len;

	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = dest_len;
	if (dest_size == 0)
		return (src_len);
	if (dest_size < dest_len)
		return (src_len + dest_size);
	else
	{
		while (src[j] && (dest_len + j) < dest_size)
			dest[i++] = src[j++];
		if ((dest_len + j) == dest_size && dest_len < dest_size)
			dest[--i] = '\0';
		else
			dest[i] = '\0';
		return (src_len + dest_len);
	}
}
/*
#include <stdio.h>
int		main(void)
{
	char dest[20] = "123";
	char src[] = "4567890";
	size_t size = 6;
	size_t result;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("dest (cat) = %s\nresult = %d\n-----\n", dest, result);

	return (0);
}
*/
