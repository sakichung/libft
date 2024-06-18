// 全角スペースが入っている
size_t　ft_strlcpy(char *dst, const char *src, size_t dstsize) {
    size_t i = 0;
    size_t srclen = 0;

    // srcの長さを数える
    while (src[srclen] != '\0') {
        srclen++;
    }

    // dstsizeが0より大きい場合
    if (dstsize > 0) {
        // srcの文字をdstにコピー
        while (src[i] != '\0' && i < (dstsize - 1)) {
            dst[i] = src[i];
            i++;
        }
        // 最後にヌル文字を追加
        dst[i] = '\0';
    }

    // srcの長さを返す
    return srclen;
}
