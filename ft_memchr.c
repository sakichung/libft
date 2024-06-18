/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:23:39 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 22:23:41 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void*ft_memchr(const void *s,int c,size_t n)
{

unsigned char*str;

str=(unsigned char*)s;
//unsigned char*に変換して代入

while(n>0){
if(*str==(unsigned char)c){
return(str);
}
str++;
n--;
}

return(NULL);
}