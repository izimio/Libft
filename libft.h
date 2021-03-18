#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t elementcount, size_t elementsize);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dest, char *src, size_t size);
char *ft_strdup(char *src);
size_t ft_strlcat(char *dest, char *src, size_t size);
char *ft_strchr(const char *str, int value);
char *ft_strrchr(const char *str, char c);
char *ft_strnstr(const char *s1, const char *s2, size_t len);
int	    ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_itoa(int nb);
char		**ft_split(char const *s, char c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strtrim(char const *s1, char const *set);
char *ft_strjoin(char const *s1, char const *s2);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
#endif
