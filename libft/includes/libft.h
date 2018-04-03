#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void    ft_memset(void *str, int c, size_t n);
size_t  ft_strlen(const char *str);
int     ft_atoi(char *str);
char    *ft_strdup(char *str);
char    *ft_strcpy(char *str,const char *src);
char    *ft_strncpy(char *str,const char *src, int i);
char    *ft_strcat(char *dest, char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
