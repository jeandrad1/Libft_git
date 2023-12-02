int ft_strlcpy(char *dest, const char *src, int size) {
    int i; 
	i = 0;

    while (src[i] != '\0' && i < size - 1)
	{
        dest[i] = src[i];
        i++;
    }
    if (size > 0)
	{
        dest[i] = '\0';
    }
    while (src[i] != '\0')
	{
        i++;
    }

    return i;
}
