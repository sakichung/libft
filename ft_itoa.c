#include <stdlib.h>

// ヘルパー関数：整数の桁数を計算する
static size_t get_num_len(int n) {
    size_t len = 0;
    // 負の数や0の場合は符号や桁数のために1を追加
    if (n <= 0)
        len++;
    // 桁数を数える
    while (n != 0) {
        len++;
        n /= 10;
    }
    return len;
}

// 整数を文字列に変換する関数
char *ft_itoa(int n) {
    char *str;               
    size_t len;             
    unsigned int num;        
    size_t i;                

    // 数字の桁数を取得
    len = get_num_len(n);
    // 桁数＋終端文字のためのメモリを割り当て
    str = (char *)malloc(len + 1);
    if (!str)
        return NULL;

    str[len] = '\0';  // 終端文字をセット
    // nが負の場合の処理
    if (n < 0) {
        str[0] = '-';  // 負号をセット
        num = -n;      // 符号を取り除くためにunsigned intに変換
    } else {
        num = n;       // nが正の場合、そのままnumにセット
    }

    i = len - 1;       // 最後のインデックスから開始
    // nが0の場合の特別な処理
    if (num == 0) {
        str[0] = '0';
        return str;
    }

    // 各桁を文字に変換してセット
    while (num > 0) {
        str[i] = (num % 10) + '0';  // 10で割った余りを文字に変換
        num /= 10;                  // 次の桁に移動
        i--;
    }

    return str;  
}
