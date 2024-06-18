void *memcpy(void *dst, const void *src,size_t n){

//unsignedにする...?
//dst=(char *)dst;
// char *str1;
//str1= dst;
 
// char *str2;
//str2= (char *)src;

size_t i;
i=0;
// destじゃなくてdst
if (dest == NULL && src == NULL){
	return (NULL);
	}
	
while(n>0){
// 無効な型変換
(char*)dst[i]=(char*)src[i];
i++;
n--;
}

return(dst);
}
