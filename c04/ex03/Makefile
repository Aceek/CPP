CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = materia

HEADER = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp\
IMateriaSource.hpp MateriaSource.hpp includes.hpp
INCLUDES = -I.

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
