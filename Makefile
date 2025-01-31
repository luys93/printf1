NAME = libftprintf.a
CC = cc
AR = ar rcs
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_handle_unsigned.c ft_handle_char.c ft_handle_exadecimal_upper.c \
		ft_handle_exadecimal_lower.c ft_handle_pointers.c ft_handle_integer.c \
		ft_handle_string.c ft_printf.c ft_printf_utils.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
		$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all	

.PHONY: all clean fclean re bonus