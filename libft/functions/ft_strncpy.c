#include "../includes/libft.h"


char *ft_strncpy(char *dest, const char *src, int nb)
{
  int i;

  i = 0;
  while(src[i] && i < nb)
  {
    dest[i] = src[i];
    i++;
  }
  while(i <= nb)
  {
    dest[i] = '\0';
    i++;
  }
  return (dest);
}
