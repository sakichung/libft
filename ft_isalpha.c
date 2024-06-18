/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:22:58 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 14:16:54 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return(1024);
	}
	else
	{
		return(0);
	}
}

int ft_islower(int c)
{
	if (c >= 'a' && c<='z')
	{
		return(1024);
	}
	else
	{
		return(0);
	}
}
int ft_isalpha(int c)
{

//実際の動作
/*if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
return(1024);
}else{
return(0);
}*/
	return(ft_isupper(c)||ft_islower(c));
}