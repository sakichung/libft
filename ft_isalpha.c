int ft_isalpha(int c){

//実際の動作
/*if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
return(1024);
}else{
return(0);
}*/


return(ft_isupper(c)||ft_isslower(c));
}