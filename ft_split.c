/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:24:19 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 14:00:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1,char const *s2){

int i;
int j;
i=0;
j=0;

if(!s1||!s2)
	return NULL;

//引き取った文字列の長さの計算
int s1len=ft_strlen(s1);
int s2len=ft_strlen(s2);

//連結する新規文字列のためのメモリを割り当て
char *newstr=(char*)malloc(s1len+s2len+1);
if(!newstr)
	return NULL;

//新規文字列に代入
while(i<s1len){
	newstr[i]=s1[i];
	i++;
}

while(j<=s2len){
	newstr[i+j]=s2[j];
	j++;
}

//最後にヌルを入れる
newstr[i+j]='\0';

//free????

return newstr;

}
