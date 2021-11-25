NAME	=	Simulate
CC		=	g++
FILES	=	Main\
			MateriaSource\
			AMateria\
			Character\
			Ice\
			Cure
OBJ 	=	$(FILES:%=obj/%.o)
SRC		=	$(FILES:%=%.cpp)
CFLAGS	=	-I . -std=c++98 -pedantic -Wall -Wextra# -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

obj/%.o: %.cpp
	@mkdir -p obj/
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj/

fclean: clean
	rm -f $(NAME)

re: fclean all
