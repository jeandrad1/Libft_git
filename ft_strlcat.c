int ft_strlcat(char *dst, const char *src, int size)
{
	int dst_len;
	int src_len;
	int i;

	dst_len = 0;
	src_len = 0;
	i = 0;
    while (dst[dst_len] != '\0' && dst_len < size)
	{
        dst_len++;
    }
    while (src[src_len] != '\0')
	{
        src_len++;
    }
    if (size <= dst_len)
	{
        return size + src_len;
    }
    while (src[i] != '\0' && dst_len + i < size - 1)
	{
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return dst_len + src_len;
}
