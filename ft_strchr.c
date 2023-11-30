/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheida <sheida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:28:54 by sheida            #+#    #+#             */
/*   Updated: 2023/11/23 09:39:25 by sheida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int chr)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == chr)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == chr)
		return ((char *)str + i);
	return (0);
}

/*#include <stdio.h>

int main() {
    const char *str = "Hello, World!";
    int search_char = 'o';

    char *result = ft_strchr(str, search_char);

   printf("Found '%c' at position %ld\n", search_char, result - str);

    return 0;
}*/
