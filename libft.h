#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>


int		        ft_strlen(char *str);
int		        ft_atoi(const char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int             ft_toupper(int c);
int ft_tolower(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t elementCount, size_t elementSize);
void *ft_memcpy(void *dest, const void *src, size_t n);
#endif
