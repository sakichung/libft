/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:24:43 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 14:00:39 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1,char const *s2){

    char *new_str;
    size_t s1_len;
    size_t s2_len;
    size_t i;
    size_t j;

		/*
		// エラーハンドリング
		    if (!s1 || !s2)
        return NULL;
        */
        
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);

    // s1 と s2 の長さを合計して、新しい文字列のためのメモリを割り当てる
    new_str = (char *)malloc(s1_len + s2_len + 1);
    if (!new_str)
        return NULL;

    // s1 を新しい文字列にコピー
    i = 0;
    while (i < s1_len) {
        new_str[i] = s1[i];
        i++;
    }

    // s2 を新しい文字列にコピー
    j = 0;
    while (j < s2_len) {
        new_str[i + j] = s2[j];
        j++;
    }

    // 終端NULL文字を追加
    new_str[i + j] = '\0';

    return new_str;
}
