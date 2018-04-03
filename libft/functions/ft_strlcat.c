#include "../includes/libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  len;
    size_t  slen;

    len = 0;
    slen = strlen(src);
    while (*dst && size > 0)
    {
        dst++;
        len++;
        size--;
    }
    while (*src && size-- > 1)
        *dst++ = *src++;
    if (size == 1 || *src == 0)
        *dst = '\0';
    return (slen + len);
}
