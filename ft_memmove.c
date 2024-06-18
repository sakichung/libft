/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:23:56 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 14:30:07 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void* src, size_t len)
{
	size_t			i;
	unsigned char	*dst_char;
	unsigned char	*src_char;

	dst_char = (unsigned char *)dst;
	src_char = (unsigned char *)src;
	i = 0;
	if(src < dst)
	{
		while(len >= 1)
		{
		// 左辺dstを型変換しておく必要がある
			dst_char[len - 1] = src_char[len - 1];
			len--;
		}
	}
	else
	{
		while(i < len)
		{
			dst_char[i] = src_char[i];
			i++;
		}
	}
	return((void *)dst_char);
}