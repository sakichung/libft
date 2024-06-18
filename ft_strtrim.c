/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:22:00 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 19:08:54 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (is_in_set(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > 0 && is_in_set(s1[end - 1], set))
	{
		end--;
	}
	if (end > start)
		len = end - start;
	else
		len = 0;
	trimmed_str = ft_substr(s1, start, len);
	if (trimmed_str == NULL)
		return (NULL);
	return (trimmed_str);
}
