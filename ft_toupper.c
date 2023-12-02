
#include "libft.h"

int toupper(int ch)
{
    if (ch <= 122 && ch >= 97)
            ch = ch - 32;
    return (ch);
}

#include <stdio.h>
int main() {
	char lowercase = 'a';
	char uppercase = toupper(lowercase);
	printf("Lowercase: %c\n", lowercase);
	printf("Uppercase: %c\n", uppercase);
	return (0);
}
