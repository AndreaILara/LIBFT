/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <ainigo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:31:00 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/10/01 14:35:19 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move_backward(unsigned char *dst, const unsigned char *src,
		size_t len)
{
	while (len > 0)
	{
		len--;
		dst[len] = src[len];
	}
}

static void	move_forward(unsigned char *dst, const unsigned char *src,
		size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	if (tmp_dest == tmp_src || n == 0)
		return (dest);
	if (tmp_src < tmp_dest && tmp_dest < tmp_src + n)
		move_backward(tmp_dest, tmp_src, n);
	else
		move_forward(tmp_dest, tmp_src, n);
	return (dest);
}
