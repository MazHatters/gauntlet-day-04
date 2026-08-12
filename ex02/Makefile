NAME = spawns

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17
DEBUG = -g3

SRC = main.cpp

OBJ_DIR = obj_files
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))

all:: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "Object files created inside obj_files directory"
	@echo "Program created, run ./spawns"

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

debug:
	@$(CXX) $(CXXFLAGS) $(DEBUG) $(OBJ) -I. -o $(NAME)
	@echo "Object files created inside obj_files directory"
	@echo "Program created with debug flag, run gdb/valgrind --leak-check=full ./spawns"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Removed object files"

fclean: clean
	@rm -rf $(NAME)
	@echo "Program removed"

re: fclean all

.PHONY: all clean fclean re