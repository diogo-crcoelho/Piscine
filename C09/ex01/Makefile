SRCS= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS=$(SRCS:.c=.o)
INC=includes
CC=gcc
CFLAGS=-Wall -Wextra -Werror

#$< -> %.c. $@-> %.o
%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INC}

#$@ -> nome da funcao... $^-> lista dependencias(OBJS)
libft.a: $(OBJS)
	ar crs $@ $^

all: libft.a

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all