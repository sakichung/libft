void	*memset(void *b, int c,size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char*)b;
	i = 0;
	while(len > 0)
	{
		str[i]=c;
		i++;
		len--;
	}
	return(str);
}
