int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int r;
	int i;

	r = 0;
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i]){
			r = s1[i] - s2[i];
			if (r < 0){
				return (-1);
			}
			if (r > 0){
				return (1);
			}
		}
		i++;
	}
	return (0);
}