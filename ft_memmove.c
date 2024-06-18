/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:23:56 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 17:07:25 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst_char;
	unsigned char	*src_char;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_char = (unsigned char *)dst;
	src_char = (unsigned char *)src;
	i = 0;
	while (src < dst && len >= 1)
	{
		dst_char[len - 1] = src_char[len - 1];
		len--;
	}
	while (src >= dst && i < len)
	{
		dst_char[i] = src_char[i];
		i++;
	}
	return ((void *)dst_char);
}
