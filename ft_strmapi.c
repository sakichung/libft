/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:25:05 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 14:01:56 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strmapi関数の実装
char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    char *new_str;
    size_t len;
    size_t i;

    // 入力のチェック：sまたはfがNULLの場合、NULLを返す
    if (!s || !f)
        return NULL;

    // 入力文字列の長さを取得
    len = ft_strlen(s);

    // 新しい文字列のためにメモリを割り当てる
    new_str = (char *)malloc(len + 1);
    if (!new_str)
        return NULL;

    // 各文字に対して関数fを適用するためのループ
    i = 0;
    while (i < len) {
        // 関数fを適用し、結果をnew_strに格納
        new_str[i] = f(i, s[i]);
        i++;
    }

    // 終端文字を追加
    new_str[len] = '\0';

    return new_str;  // 新しい文字列を返す
}





