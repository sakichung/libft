char *strrchr(const char*s, int c){
int i;
i=0;

while(s[i]!='\0'){
	i++;
	}
	
/*終端のヌル文字は文字列の一部と見なされるため、c が `\0' の場合、
この関数は終端の `\0' を見つけます。*/
if((unsigned char)c==NULL){
    return i;
	}
	
while(i>0){  
    if(s[i]==(unsigned char)c){
        //見つかった文字へのポインタを返します。
        return (s+i);
    }
    i--;
    }
    
    //文字が文字列に存在しない場合は NULL を返します。
    return NULL;
}