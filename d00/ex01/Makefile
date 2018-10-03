NAME = phonebook

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp Contact.class.cpp commands.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) :
	clang++ -c $(SRC) $(FLAGS)
	clang++ $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re