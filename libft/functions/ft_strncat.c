#include "../includes/libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
  char *d;
  int i;

  i = 0;
  d = dest;
  while(*dest)
    dest++;
  while(i < n && src[i])
  {
    dest[i] = src[i];
    i++;
  }
  while(i < n)
  {
    dest[i] = 0;
    i++;
  }
  return (d);
}
