/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:23:56 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 22:23:58 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void* memmove(void *dst,const void* src, size_t len){
int i;
i=0;

if(src<dst){
while(len>=0){
// 左辺dstを型変換しておく必要がある
dst[len-1]=src[len-1];
len--;
}
}else{
while(i<len){
dst[i]=src[i];
i++;
}


return(dst)
}