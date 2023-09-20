NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS=ft_isdigit.c
OBJ =$(SRCS:.c=.o)

all:$(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) $(HDRS) -c $< -o $@ 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re