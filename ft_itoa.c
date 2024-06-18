/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:23:27 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 19:03:00 by pchung           ###   ########.fr       */
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
	str = (char *)ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (NULL);
	str[0] = '-';
	if (n < 0)
		num = -n;
	else
		num = n;
	i = len - 1;
	while (1)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		if (num == 0)
			break ;
		i --;
	}
	return (str);
}
