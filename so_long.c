/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   so_long.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/12/21 15:46:16 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/02/10 22:45:13 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "so_long.h"

void	event_render(t_img *img)
{
	mlx_hook(img->w_m, 2, 1L << 0, ft_move_player, img);
	mlx_hook(img->w_m, 17, 1L << 0, exit_mouse, &img);
	mlx_loop (img->p_m);
}

void	event_handler(t_img *img, int i, int x, int y)
{
	int		j;

	while (global_map[++i])
	{
		j = -1;
		x = 0;
		while (global_map[i][++j])
		{
			mlx_put_image_to_window(img->p_m, img->w_m, img->empty, x, y);
			if (global_map[i][j] == '1')
				mlx_put_image_to_window(img->p_m, img->w_m, img->wall, x, y);
			else if (global_map[i][j] == 'E')
				mlx_put_image_to_window(img->p_m, img->w_m, img->ec, x, y);
			else if (global_map[i][j] == 'C')
				mlx_put_image_to_window(img->p_m, img->w_m, img->coin, x, y);
			else if (global_map[i][j] == 'P')
			{
				mlx_put_image_to_window(img->p_m, img->w_m, img->player, x, y);
				img->b = i;
				img->a = j;
			}
			x += 68;
		}
		y += 68;
	}
}

void	ft_screen(t_img *img)
{
	img = malloc(sizeof(t_img));
	img->a = 0;
	img->b = 0;
	img->p_m = mlx_init();
	img->w_m = mlx_new_window (img->p_m, map_height, \
	map_weight, "SO LONG" );
	img->player = mlx_xpm_file_to_image(img->p_m, i_player, \
	&img->hei, &img->wei);
	img->playerR = mlx_xpm_file_to_image(img->p_m, i_playerL, \
	&img->hei, &img->wei);
	img->playerL = mlx_xpm_file_to_image(img->p_m, i_playerR, \
	&img->hei, &img->wei);
	img->wall = mlx_xpm_file_to_image(img->p_m, i_wall, \
	&img->hei, &img->wei);
	img->coin = mlx_xpm_file_to_image(img->p_m, i_coin, \
	&img->hei, &img->wei);
	img->empty = mlx_xpm_file_to_image(img->p_m, i_empty, \
	&img->hei, &img->wei);
	img->ec = mlx_xpm_file_to_image(img->p_m, i_ec, \
	&img->hei, &img->wei);
	img->exit_o = mlx_xpm_file_to_image(img->p_m, i_exit_o, \
	&img->hei, &img->wei);
	event_handler(img, -1, 0, 0);
	event_render(img);
}

int	main(int ac, char **av)
{
	int		fd;
	char	*map;
	t_img	*img;

	img = 0 ;
	if (ac == 2)
	{
		if (!ft_ber_checker(av[1]))
			return (0);
		fd = open(av[1], O_RDONLY);
		map = get_map(fd);
		if (!ft_checkmap(map))
			return (0);
		global_map = ft_size(map);
		free(map);
		ft_screen(img);
	}
	else
		printf("argument less");
}
