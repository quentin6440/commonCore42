NAME = libft.a

SRC = ft_toupper \
ft_atoi \
ft_bzero \
ft_calloc \
ft_strlen \
ft_putchar_fd \
ft_itoa \
ft_substr \

CC = gcc
CFLAG =  -Wall -Wextra -Werror
RM = rm -f

all : $(NAME)

%.o : %.c
	@$(CC) $(CFLAG) -c $< -o $@

$(NAME) : $(SRC:=.o)
	ar rc $(NAME) $(SRC:=.o)

clean : 
	$(RM) $(SRC:=.o)

fclean : clean
	$(RM) $(NAME)

re : fclean all

