/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreailara <andreailara@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:07:23 by ainigo-l          #+#    #+#             */
/*   Updated: 2024/09/26 12:53:21 by andreailara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	ft_strrchr(const char *str, int c)
{
	const char	*latest = (NULL);

	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			latest = str;
		}
		str++;
	}
	if (*str == (char)c)
	{
		return ((char *)str);
	}
	return ((char *)latest);
}
