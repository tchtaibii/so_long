#include "../so_long.h"

int	ft_move_player(int key, t_img *img)
{
	if (key == 1 && global_map[img->b + 1][img->a] != '1')
	{
		// if(img->emptyy == (img->playery + 68))
		// {
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
			img->b++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->player, img->a * 68, img->b * 68);
		// }
	}
	return 0;
}