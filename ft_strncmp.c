// ft_strncmp
int strncmp(const char *s1, const char *s2, size_t n){

    size_t i = 0;

    // nが0の場合は等しいと見なす
    if (n == 0) {
        return 0;
    }

    // 両方の文字列を比較し、異なる文字が見つかるか終端に達するまで進める
    while (i < n) {
        if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0') {
            // 異なる文字が見つかった場合、その差を返す
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
        i++;
    }
    
        // n文字まで全て一致した場合は0を返す
    return 0;
}