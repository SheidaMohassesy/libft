/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touppper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheida <sheida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:02:46 by sheida            #+#    #+#             */
/*   Updated: 2023/11/20 13:03:00 by sheida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_tolower (int	c)
{
	if (c >= 65 && c <= 90) {
    return c - 32;
} else {
    return c;
}
}