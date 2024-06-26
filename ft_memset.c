/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:24:04 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 22:24:16 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *b, int c,size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char*)b;
	i = 0;
	while(len > 0)
	{
		str[i]=c;
		i++;
		len--;
	}
	return(str);
}
