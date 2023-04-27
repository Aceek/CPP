CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Bureucrat.cpp Form.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = bureucrat

HEADER = Bureucrat.hpp Form.hpp
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
