CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 #-Wshadow -Wno-shadow

SRCS = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = DiamondTrap

HEADER = ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp
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
