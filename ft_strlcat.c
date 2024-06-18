/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:24:48 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 14:00:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t dstsize){

size_t i=0;
size_t j=0;
size_t dstlen=0;
size_t srclen=0;
size_t size=dstsize;

while(src[srclen]!='\0'){
srclen++;
}

if(dst==NULL && dstsize==0){
return srclen;
}

while(dst[dstlen]!='\0'){
dstlen++;
}

while(dstsize>dstlen)
{dst[dstlen+i]=src[j];
i++;
j++;
dstsize--;
}


return(srclen+size);
}


