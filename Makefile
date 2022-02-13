NAME = so_long
MLX = -lmlx -framework OpenGL -framework AppKit
FLAGS = -Wall -Wextra -Werror -g -fsanitize=address
F = so_long.c functions/char_check.c functions/ft_moves_if.c functions/ft_strjoin.c \
		functions/gnlutils.c functions/wall.c functions/ft_ber_checker.c functions/ft_spilt.c \
		functions/ft_strlen.c functions/map-calcule.c functions/wall_up_low.c functions/ft_moves.c \
		functions/ft_strdup.c functions/get_map.c functions/map_rectengle.c functions/exit.c

all : $(NAME)

$(NAME) : $(F)
	@gcc $(FLAGS) $(F) $(MLX) -o $(NAME)
	@tput setaf 2; echo "THE GAME IS READY"

clean:
	@rm -f so_long
	@tput setaf 1; echo "CLEAN COMPLET"
fclean: clean

re: fclean all