/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:25:19 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 17:34:52 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char*s, int c)
{
	size_t	i;
	char	*last;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char) c)
			last = (char *) s + i;
		i ++;
	}
	if ((unsigned char) c == '\0')
	{
		last = (char *) s + i;
	}
	return (last);
}
