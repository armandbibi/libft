#include "../includes/libft.h"

int ft_atoi(char *str)
{
  int i;
  int sign;

  sign = 1;
  i = 0;
  while (*str == 32 || (*str >= 9 && *str <= 13))
    str++;
  if (*str == '-')
    sign = -1;
  if (*str == '-' || *str == '+')
    str++;
  while (*str >= '0' && *str <= '9')
  {
    i = i * 10 + *str - 48;
    str++;
  }
  return (i * sign);
}
