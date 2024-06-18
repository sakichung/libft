/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:22:49 by pchung            #+#    #+#             */
/*   Updated: 2024/06/18 13:59:20 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size){

    // オーバーフローのチェック
    if (size != 0 && count > SIZE_MAX / size) {
        return NULL; // オーバーフローの場合、NULLを返す
    }

    // countまたはsizeが0の場合、malloc(1)を呼び出して0を代入
    size_t total_size = count * size;
    if (count == 0 || size == 0) {
        total_size = 1;
    }

    // メモリを動的に割り当て
    void *ptr = malloc(total_size);
    if (ptr == NULL) {
        return NULL; // メモリ割り当て失敗
    }

    // メモリをゼロで初期化
    size_t i = 0;
    unsigned char *byte_ptr = (unsigned char *)ptr;
    while (i < total_size) {
        byte_ptr[i] = '\0';
        i++;
    }

    return ptr;
}