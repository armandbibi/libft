NAME=libft
CC=gcc
CFLAGS=-I.
INCLUDES=includes/libft.h
OBJS=$(SRCS:.c=.o)
CLEAN=clean
SRCS=main.c  functions/ft_strlen.c functions/ft_strdup.c functions/ft_atoi.c functions/ft_strcpy.c functions/ft_strncpy.c functions/ft_strcat.c  functions/ft_strncat.c functions/ft_strlcat.c

all	:
	@make $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(INCLUDES)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm $(NAME)

re:	fclean all
