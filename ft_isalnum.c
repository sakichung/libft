int ft_isalnum(int c){

//return(ft_isalpha(c)||ft_isdigit(c));

//isalnumと同様な処理なら8を戻す
if((c>='A'&&c<='Z')||(c>='a'&&c<='z')||(c>=0&&c<=9)){
return(8);

}

}