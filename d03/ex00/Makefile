# Name of the program
NAME	:= ex01

# Source and object files
SRC		:= main.cpp FragTrap.cpp

# Compiler and flags
CC		:= clang++
FLAGS	:= -Wall -Wextra -Werror
OBJ		:= $(SRC:.cpp=.o)

# Compile and link the program
all: $(NAME)

# Link object files into the executable
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

# Compile object files from source files
%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

# Delete object files
clean:
	rm -f $(OBJ)

# Delete all files created with the Makefile
fclean: clean
	rm -f $(NAME)

# Re-make all files
re: fclean all

# GNU will run even if files have names as instructions
.PHONY: all clean fclean re
