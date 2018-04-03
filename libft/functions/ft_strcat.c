char *ft_strcat(char *dest, const char *src)
{
  int i;

  i = 0;
  while (*dest)
    dest++;
  while (src[i])
  {
    dest[i] = src[i];
    i++;
  }
  return dest;
}
