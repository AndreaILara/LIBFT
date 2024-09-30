/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <ainigo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:52:00 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/09/24 13:05:52 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t dest_len;
	size_t src_len;
	size_t i;

	dest_len = 0;

	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_len < size - 1)
	{
		i = 0;
		while (src[i] != '\0' && dest_len + i < size - 1)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (dest_len + src_len)
}