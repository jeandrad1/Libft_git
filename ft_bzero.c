void bzero(char *str, int n)
{
	int i;

	i = 0;
	while (str[i] != '\0' && i < n)
	{
		str[i] = '\0';
		i++;
	}
}

