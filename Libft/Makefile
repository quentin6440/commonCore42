NAME = libft.a

SRC = ft_toupper \
ft_atoi \
ft_bzero \
ft_calloc \
ft_strlen \
ft_putchar_fd \
ft_itoa \
ft_substr \
ft_strnstr \

BONUS_SRC = ft_lstnew \

CC = gcc
CFLAG =  -Wall -Wextra -Werror
RM = rm -f

all : $(NAME) bonus

%.o : %.c
	@$(CC) $(CFLAG) -c $< -o $@

$(NAME) : $(SRC:=.o)
	ar rcs $(NAME) $(SRC:=.o)

bonus: $(BONUS_SRC:=.o)
	ar rcs $(NAME) $(BONUS_SRC:=.o)

clean : 
	$(RM) $(SRC:=.o) $(BONUS_SRC:=.o)

fclean : clean
	$(RM) $(NAME)

re : fclean all

