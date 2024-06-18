/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:23:52 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 14:25:10 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_char;
	unsigned char	*src_char;
	size_t			i;

	dst_char = (unsigned char *)dst;
	src_char = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while(n > 0)
	{
		dst_char[i] = src_char[i];
		i++;
		n--;
	}
	return(dst);
}
