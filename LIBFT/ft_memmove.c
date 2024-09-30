/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <ainigo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:31:00 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/09/24 12:02:00 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	if (tmp_dest == tmp_src || n == 0)
		return (dest);
	if (tmp_src < tmp_dest && tmp_dest < tmp_src + n)
	{
		while (n > 0)
		{
			n--;
			tmp_dest[n] = tmp_src[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
	}
	return (dest);
}
