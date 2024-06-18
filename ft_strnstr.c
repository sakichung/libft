char ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t i = 0;
    size_t j;

    // needle が空の文字列の場合、haystack が返されます。
    if (*needle == '\0') {
        return (char *)haystack;
    }

    while (i < len && haystack[i] != '\0') {
        
        if (haystack[i] == needle[0]) {
            j = 0;
            while (i + j < len && haystack[i + j] == needle[j]) {
            
                if (needle[j + 1] == '\0') {
                //needleの最後まで一致した場合
								//needle の最初の出現の最初の文字へのポインタが返されます
                    return (char *)(haystack + i);
                }
                j++;
            }
        }
        i++;
    }

    // needle が haystack に存在しない場合は NULL が返されます。
    return NULL;
}