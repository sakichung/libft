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