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
#endif
