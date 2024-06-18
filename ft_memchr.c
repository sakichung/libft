void*ft_memchr(const void *s,int c,size_t n)
{

unsigned char*str;

str=(unsigned char*)s;
//unsigned char*に変換して代入

while(n>0){
if(*str==(unsigned char)c){
return(str);
}
str++;
n--;
}

return(NULL);
}