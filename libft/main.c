#include "includes/libft.h"

void ts_strlen(char *str)
{
  int origin;
  int new;

  origin = strlen(str);
  new = ft_strlen(str);
  printf("string = %s, origin = %d, yours = %d\n", str, origin, new);
}

void gp_strlen(void)
{
  printf("TEST STRLEN:\n");
  ts_strlen("je suis armand");
  ts_strlen("");
  ts_strlen("0123");
}

void ts_strdup(char *str)
{
  char *origin;
  char *new;

  origin = strdup(str);
  new = ft_strdup(str);
  printf("string = %s, origin = %s, yours = %s\n", str, origin, new);
  free(origin);
  free(new);
}

void gp_strdup(void)
{
  printf("\n\nTEST STRDUP:\n");
  ts_strdup("je suis armand");
  ts_strdup("");
  ts_strdup("0123");
}

int ts_strcpy(char *str)
{
  char *origin;
  char *new;

  origin = malloc((ft_strlen(str) + 1) * sizeof(*origin));
  new = malloc((ft_strlen(str) + 1) * sizeof(*new));
  strcpy(new, str);
  ft_strcpy(origin, str);
  printf("string = %s, origin = %s, yours = %s\n", str, origin, new);
  free(origin);
  free(new);
  return (1);
}

void gp_strcpy(void)
{
  printf("\n\nTEST STRCPY:\n");
  ts_strcpy("je suis armand");
  ts_strcpy("");
  ts_strcpy("0123");
}

int ts_strncpy(char *str, int i)
{
  char *origin;
  char *new;

  origin = malloc((ft_strlen(str) + 1) * sizeof(origin));
  new = malloc((ft_strlen(str) + 1) * sizeof(new));
  strncpy(origin, str, i);
  ft_strncpy(new, str, i);
  printf("string = %s, origin = %s, yours = %s\n", str, origin, new);
  free(origin);
  free(new);
  return (1);
}

void gp_strncpy(void)
{
  printf("\n\nTEST STRNCPY:\n");
  ts_strncpy("je suis armand",5);
  ts_strncpy("", 0);
  ts_strncpy("0123", 12);
}


int ts_strcat(char *str, char *s, int i)
{
  char *origin;
  char *new;

  origin = malloc(i * sizeof(origin));
  new = malloc(i * sizeof(new));
  strcpy(origin, str);
  ft_strcpy(new, str);
  strcat(origin, s);
  ft_strcat(new, s);
  printf("string = %s, origin = %s, yours = %s\n", str, origin, new);
  free(origin);
  free(new);
  return (1);
}

void gp_strcat(void)
{
  printf("\n\nTEST STRCAT:\n");
  ts_strcat("je suis armand", "coucou", 50);
  ts_strcat("", "", 5);
  ts_strcat("0123", "456", 8);
}


int ts_strncat(char *str, char *s, int i, int n)
{
  char *origin;
  char *new;

  origin = malloc(i * sizeof(origin));
  new = malloc(i * sizeof(new));
  ft_strcpy(origin, str);
  ft_strcpy(new, str);
  strncat(origin, s, n);
  ft_strncat(new, s, n);
  printf("string = %s, origin = %s, yours = %s\n", str, origin, new);
  free(origin);
  free(new);
  return (1);
}

void gp_strncat(void)
{
  printf("\n\nTEST STRNCAT:\n");
  ts_strncat("je suis armand", "coucou", 50, 6);
  ts_strncat("", "", 5, 0);
  ts_strncat("0123", "456", 8, 5);
}

int ts_strlcat(char *str, char *s, int i, int n)
{
  char *origin;
  char *new;

  origin = malloc(i * sizeof(origin));
  new = malloc(i * sizeof(new));
  ft_strcpy(origin, str);
  ft_strcpy(new, str);
  strlcat(origin, s, n);
  ft_strlcat(new, s, n);
  printf("string = %s, origin = %s, yours = %s\n", str, origin, new);
  free(origin);
  free(new);
  return (1);
}

void gp_strlcat(void)
{
  printf("\n\nTEST STRNCAT:\n");
  ts_strlcat("je suis armand", "coucou", 50, 6);
  ts_strlcat("", "", 5, 0);
  ts_strlcat("0123", "456", 8, 5);
}

void ts_atoi(char *str)
{
  int origin;
  int new;

  origin = atoi(str);
  new = ft_atoi(str);
  printf("string = %s, origin = %d, yours = %d\n", str, origin, new);
}

void gp_atoi(void)
{
  printf("\n\nTEST ATOI:\n");
  ts_atoi("123456");
  ts_atoi("aaa4456a");
  ts_atoi("   12 12");
  ts_atoi("-12");
  ts_atoi("--12");
  ts_atoi("+12");
}


int main(int argc, char const *argv[])
{
  if (argc == 1)
  {
    gp_strlen();
    gp_strdup();
    gp_atoi();
    gp_strcpy();
    gp_strncpy();
    gp_strcat();
    gp_strncat();
  }
}
