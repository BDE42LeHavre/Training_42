NAME = Choices
MAKEFLAGS	+= --silent #used to hide the compilation messages

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
RM = rm -f

$(NAME):
		$(CC) $(CFLAGS) Colors.cpp main.cpp Weapon.cpp Character.cpp GameManager.cpp -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re