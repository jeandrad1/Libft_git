#ifndef LIBFT_H
#define LIBFT_H

int					ft_isalpha(int c);
void 				bzero(char *str, int n);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void 				*memchr(const void *str, int c, int n);
void 				ft_memset(char *str, int c, unsigned int n);
char 				*strchr(const char *str, int c); 
int 				ft_strlcat(char *dst, const char *src, int size);
int 				ft_strlcpy(char *dest, const char *src, int size);
unsigned long int	ft_strlen(char *str);
int 				ft_strncmp(char *s1, char *s2, unsigned int n);
char 				*strrchr ( const char *str, int c);
int 				ft_toupper(int ch);


#endif 

