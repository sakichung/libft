int ft_memcmp(const void *s1, const void *s2, size_t n){
unsigned int s1len=0;
unsigned int s2len=0;

while(s1[s1len]!='\0'){
s1len++;
}

while(s1[s2len]!='\0'){
s2len++;
}
// 一文字ずつ比較する必要がある
// if (s1[i] == s2[i])みたいに
int i=(int)(s1len-s2len);

return i;
}

