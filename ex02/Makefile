#HEADER

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98 -g
RM			= rm -f
HEADER		= include
SRC_DIR		= src
BUILD_DIR	= object
NAME		= Mutant
SRC			+= src/main.cpp				\

OBJ			= ${SRC:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o}
DEP			= $(OBJ:.o=.d)

all			: $(NAME)

$(NAME)		: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(BUILD_DIR)/%.o	:$(SRC_DIR)/%.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -I$(HEADER) -MMD -MP -c $< -o $@

clean				:
	$(RM) -r $(BUILD_DIR)

fclean				:	clean
	$(RM) $(NAME)

re					:	fclean all

.PHONY				:	all clean fclean re
-include $(DEP)
