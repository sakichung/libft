int ft_isprint(int c){
if(c>=32&C<=126){ // if ((int) ' ' <= c && c <= (int) '~')のほうがわかりやすい
return(16384);
}else{
return(0);
}
}