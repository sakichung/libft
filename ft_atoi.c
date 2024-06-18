/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:22:16 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 18:46:31 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	signs(char *str, int *atoi_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i ++;
	else if (str[i] == '-')
	{
		count *= -1;
		i ++;
	}
	*atoi_i = i;
	return (count);
}

static int	atoi_overflow(int sign)
{
	if (sign > 0)
		return ((int) LONG_MAX);
	if (sign < 0)
		return ((int) LONG_MIN);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned long	result;
	int				delta;
	int				i;

	result = 0;
	i = 0;
	sign = signs((char *) str, &i);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if (result > (unsigned long) LONG_MAX / 10)
			return (atoi_overflow(sign));
		result *= 10;
		delta = str[i] - '0';
		if (result > (unsigned long) LONG_MAX - delta)
			return (atoi_overflow(sign));
		result += delta;
		i++;
	}
	return ((int) result * sign);
}
