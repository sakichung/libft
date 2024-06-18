char *ft_strdup(const char*s1){

   // NULLチェック
    if (s1 == NULL) {
        return NULL;
    }

    // 文字列の長さを計算
    size_t len = 0;
    while (s1[len] != '\0') {
        len++;
    }

    // メモリを動的に割り当て
    char *dup = (char *)malloc((len + 1) * sizeof(char));
    if (dup == NULL) {
        return NULL; // メモリ割り当て失敗の場合
    }

    // 文字列をコピー
    size_t i = 0;
    while (i <= len) { // 終端文字もコピー
        dup[i] = s1[i];
        i++;
    }
    
    /*
        while (i <len) { 
	          dup[i] = src[i];
				    i++;
    }
	    dup[i]='\0';
    
    */

    return dup;
}