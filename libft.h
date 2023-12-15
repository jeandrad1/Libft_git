/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:24:09 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/15 23:39:47 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
size_t				ft_strlen(const char *str);
int					ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
int					ft_toupper(int ch);
int					ft_tolower(int ch);
char				*ft_strchr(const char *str, int c);
void				ft_bzero(void *str, size_t n);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
void				*ft_memset(void *str, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
int					ft_atoi(const char *str);
char				*ft_strnstr(const char *s, const char *ne, size_t len);
void				*ft_calloc(size_t num, size_t size);
void				*ft_memcpy(void	*dest, void const *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
char				*ft_strdup(const char *str);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const*s1, char const *s2);
#endif