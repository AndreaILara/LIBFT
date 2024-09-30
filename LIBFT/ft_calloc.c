/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreailara <andreailara@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:01:43 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/09/26 15:31:05 by andreailara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t			total_size;
	void			*ptr;
	size_t			i;
	unsigned char	*temp;

	total_size = num * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	temp = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		temp[i] = 0;
		i++;
	}
	return (ptr);
}
