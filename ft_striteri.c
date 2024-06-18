/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchung <pchung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:24:38 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 22:24:39 by pchung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*)) {
    size_t i;

    // 入力チェック：sまたはfがNULLの場合、何もせずに戻る
    if (!s || !f)
        return;

    // 文字列の各文字に対して関数fを適用するループ
    i = 0;
    while (s[i]) {
        // インデックスiと文字のアドレス&s[i]をfに渡す
        f(i, &s[i]);
        i++;
    }
}