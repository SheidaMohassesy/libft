/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheida <sheida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:17:13 by sheida            #+#    #+#             */
/*   Updated: 2023/11/23 12:18:55 by sheida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

§#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t i;
	size_t src_len;

	i = 0;
	if (!dest || !src)
		return (0);
	src_len = ft_strlen(src);
	if (!destsize)
		return (src_len);
	while (src[i] != '\0' && i < destsize)
	{
		dest[i] = src[i];
		i++;
	}
	if (destsize < src_len)
		dest[destsize - 1] = '\0';
	else if (destsize != 0)
		dest[i] = '\0';
	return (src_len);
}
