void *memchr(const void *str, int c, int n)
{
    const unsigned char *p = str;
	int i;

	i = 0;
    while (i < n )
	{
        if (p[i] == (unsigned char)c)
            return (void *)(p + i);
		i++;
	}
}

#include <stdio.h>
int main()
{
	char str[] = "Test of the code";
	int n = sizeof(str) - 1;
	char c = 'o';

	void *result = memchr(str, c, n);

	if (result != NULL)
	{
		printf("Character '%c' found at index %ld\n", c, (char *)result - str);
	}
	else
	{
		printf("Character '%c' not found\n", c);
	}
	return (0);
}
