/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainigo-l <ainigo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:01:43 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/10/01 14:34:02 by ainigo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t			total_size;
	void			*ptr;
	unsigned char	*temp;
	size_t			i;

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
