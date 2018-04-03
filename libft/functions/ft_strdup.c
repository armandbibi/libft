#include "../includes/libft.h"

char  *ft_strdup(char *str)
{
  int i;
  char *dup;

  i = 0;
  while (str[i] != 0)
    i++;
  if ((dup = (char *) malloc(sizeof(*dup) * i)) == 0)
    return (0);
  i = 0;
  while (str[i]) {
    dup[i] = str[i];
    i++;
  }
  dup[i] = '\0';
  return (dup);
}
