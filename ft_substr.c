char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *substr;
    size_t i;

    if (!s)
        return NULL;

    // start が文字列の長さ以上の場合、空の文字列を返す
    if (start >= ft_strlen(s)) {
        substr = (char *)malloc(1);
        if (!substr)
            return NULL;
        substr[0] = '\0';
        return substr;
    }

    // len が start からの文字列の残りの長さを超える場合、len を調整
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;

    // 部分文字列のためのメモリを割り当て
    substr = (char *)malloc(len + 1);
    if (!substr)
        return NULL;

    // 部分文字列をコピー
    i = 0;
    while (i < len && s[start + i] != '\0') {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';  // 終端NULL文字を追加

    return substr;
}
