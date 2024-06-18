/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:24:43 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 18:50:29 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	newstr = (char *) malloc(s1len + s2len + 1);
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, s1len + 1);
	ft_strlcpy(newstr + s1len, s2, s2len + 1);
	return (newstr);
}
