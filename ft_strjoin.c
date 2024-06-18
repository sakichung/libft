/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:24:43 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 15:25:02 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	s1len;
	size_t	s2len;
	char	*newstr;

	i = 0;
	j = 0;
	if(!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	newstr = (char*) malloc(s1len + s2len + 1);
	if (!newstr)
		return (NULL);
	while (i < s1len)
	{
		newstr[i] = s1[i];
		i++;
	}
	while(j <= s2len)
	{
		newstr[i + j] = s2[j];
		j++;
	}
	newstr[i + j]='\0';
	return (newstr);
}
