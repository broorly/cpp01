
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98



NAME = 	violence

SRC = 	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 
	
OBJ = $(SRC: .c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS)  $(OBJ) -o $(NAME)

clean:
		rm -f *.o
		rm -f ./src/*.o

fclean: clean
		rm -f $(NAME)

re: fclean all