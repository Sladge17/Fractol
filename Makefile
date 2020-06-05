NAME = fractol
FLAG = -Wall -Wextra -Werror

GL_DIR = minilibx_macos/
GL_FLAG = -lm -framework OpenGL -framework AppKit
GL = $(GL_DIR)libmlx.a $(GL_FLAG)

LIBFT_DIR = LibFT/
LIBFT = $(LIBFT_DIR)libft.a

HEADER_DIR = includes/
HEADER = -I $(HEADER_DIR)

SRC_DIR = src/
SRC_LIST = fractol.c\
			rgb_triangle.c\
			drawing.c\
			complex_actions1.c\
			complex_actions2.c\
			fractals1.c\
			fractals2.c\
			controls_main.c
SRC = $(addprefix $(SRC_DIR), $(SRC_LIST))

OBJ_DIR = obj/
OBJ_LIST = $(patsubst %.c, %.o, $(SRC_LIST))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_LIST))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(HEADER) $(OBJ) $(LIBFT) $(GL)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c $(HEADER_DIR)*.h
	@mkdir -p $(OBJ_DIR)
	@gcc -c $(HEADER) $< -o $@ $(FLAG)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
