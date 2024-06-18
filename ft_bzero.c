void ft_bzero(void *s,size_t n){

//n がゼロの場合、bzero() は何もしません。
if(n==0){
return 0;
}

//bzero() 関数は、n バイトをゼロクリアして文字列 s に書き込みます。
// sを事前に型変換する必要がある
s[n]='\0';

}