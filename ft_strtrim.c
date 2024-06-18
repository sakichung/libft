/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:22:00 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 22:25:24 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdbool.h>
//使っていいだっけ？*/

#include <stdlib.h>

// ヘルパー関数：指定された文字がsetに含まれているか確認
int is_in_set(char c, const char *set) {
    while (*set) {
        if (c == *set)
            return 1;
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set) {
    char *trimmed_str;
    size_t start;
    size_t end;
    size_t len;
    size_t i;

    if (!s1 || !set)
        return NULL;

    // 先頭文字をチェック
    start = 0;
    if (is_in_set(s1[start], set)) {
        start++;
    }

    // 末尾文字をチェック
    end = strlen(s1);
    if (end > 0 && is_in_set(s1[end - 1], set)) {
        end--;
    }

    // トリムされた部分の長さを計算
    len = end > start ? end - start : 0; // 三項演算子使えない

		// ここから
    // トリムされた文字列のためのメモリを割り当て
    trimmed_str = (char *)malloc(len + 1);
    if (!trimmed_str)
        return NULL;

    // トリムされた部分を新しい文字列にコピー
    for (i = 0; i < len; i++) {
        trimmed_str[i] = s1[start + i];
    }
    trimmed_str[len] = '\0';  // 終端NULL文字を追加
    // ここまでの処理
    // trimmed_str = ft_substr(s1, start, len);
    // if (trimmed_str == NULL)
    //     return (NULL);
    // で代替可能
    // けど、代替するかは好み(このままでもいい)
    return trimmed_str;
}


