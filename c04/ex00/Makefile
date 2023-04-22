CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = animal

HEADER = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
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
