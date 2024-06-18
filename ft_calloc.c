/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:22:49 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 14:48:46 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	size_t			i;
	unsigned char	*byte_ptr;

	if (size != 0 && count > SIZE_MAX / size)
	{
		return (NULL);
	}
	total_size = count * size;
	if (count == 0 || size == 0)
	{
		total_size = 1;
	}
	byte_ptr = (unsigned char *) malloc(total_size);
	if (byte_ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < total_size)
	{
		byte_ptr[i] = '\0';
		i++;
	}
	return ((void *) byte_ptr);
}
