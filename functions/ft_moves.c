#include "../so_long.h"
void ft_move_down(int key, t_img *img)
{
	if (key == 1 || key == 125)
	{
		if(global_map[img->b + 1][img->a] != '1' && global_map[img->b + 1][img->a] != 'E')
		{
			if(global_map[img->b + 1][img->a] == 'C')
				img->cn++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
			img->b++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->player, img->a * 68, img->b * 68);
		}
		else if (global_map[img->b + 1][img->a] == 'E' && img->cn == img->cnf)
		{
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
			img->b++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->player, img->a * 68, img->b * 68);
		}
	}
}
void ft_move_up(int key, t_img *img)
{
	if (key == 13 || key == 126)
	{
		if(global_map[img->b - 1][img->a] != '1' && global_map[img->b - 1][img->a] != 'E')
		{
			if(global_map[img->b - 1][img->a] == 'C')
				img->cn++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
			img->b--;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->player, img->a * 68, img->b * 68);
		}
		else if (global_map[img->b - 1][img->a] == 'E' && img->cn == img->cnf)
		{
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
			img->b--;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->player, img->a * 68, img->b * 68);
		}
	}
}
int	ft_move_player(int key, t_img *img)
{
	ft_move_down(key, img);
	ft_move_up(key, img);
	if (key == 53)
	{
		mlx_destroy_window(img->ptr_mlx, img->window_mlx);
		exit(1);
	}

	return 0;
}