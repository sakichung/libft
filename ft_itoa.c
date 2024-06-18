/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:23:27 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 14:59:54 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len ++;
	while (n != 0)
	{
		len ++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	num;
	size_t			i;

	len = get_num_len(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
	{
		num = n;
	}
	i = len - 1;
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i --;
	}
	return (str);
}
