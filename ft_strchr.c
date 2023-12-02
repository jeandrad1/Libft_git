char *strchr(const char *str, int c) 
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
			return (i);
		i++;
	}
	return (0);
}
