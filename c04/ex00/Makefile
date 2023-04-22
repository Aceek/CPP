CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Animal.cpp Chat.cpp Chien.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = animal

HEADER = Animal.hpp Chat.hpp Chien.hpp
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
