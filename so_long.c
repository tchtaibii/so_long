/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:46:16 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/10 19:06:31 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "functions/functions.h"

void ft_screen(char **str)
{
	t_player p;
	int i = 0;
	int j;
	int x;
	int y = 0;
	t_img img;
	
	img.a = 0;
	img.b = 0;
	img.ptr_mlx = mlx_init();
    img.window_mlx = mlx_new_window (img.ptr_mlx, map_height, map_weight, "SO LONG" );
	img.player = mlx_xpm_file_to_image(img.ptr_mlx, i_player, &img.hei, &img.wei);
	img.wall = mlx_xpm_file_to_image(img.ptr_mlx, i_wall, &img.hei, &img.wei);
	img.coin = mlx_xpm_file_to_image(img.ptr_mlx, i_coin, &img.hei, &img.wei);
	img.empty = mlx_xpm_file_to_image(img.ptr_mlx, i_empty, &img.hei, &img.wei);
	img.exit_c = mlx_xpm_file_to_image(img.ptr_mlx, i_exit_c, &img.hei, &img.wei);
	img.exit_o = mlx_xpm_file_to_image(img.ptr_mlx, i_exit_o, &img.hei, &img.wei);
	while(str[i])
	{
		j = 0;
		x = 0;
		while(str[i][j])
		{
			mlx_put_image_to_window(img.ptr_mlx, img.window_mlx, img.empty, x , y);
			if(str[i][j] == '0')
			{
				img.emptyx = x;
				img.emptyy = y;
			}
			if(str[i][j] == '1')
				mlx_put_image_to_window(img.ptr_mlx, img.window_mlx, img.wall, x , y);
			else if(str[i][j] == 'E')
				mlx_put_image_to_window(img.ptr_mlx, img.window_mlx, img.exit_c, x , y);
			else if(str[i][j] == 'E' && coin_fnum == coin_num)
				mlx_put_image_to_window(img.ptr_mlx, img.window_mlx, img.exit_o, x , y);
			else if(str[i][j] == 'C')
				mlx_put_image_to_window(img.ptr_mlx, img.window_mlx, img.coin, x , y);
			else if(str[i][j] == 'P')
			{
				mlx_put_image_to_window(img.ptr_mlx, img.window_mlx, img.player, x , y);
				img.playerx = x;
				img.playery = y;
				img.b = i;
				img.a = j;
			}
			j++;
			x += 68;
		}
		y += 68;
		i++;
	}
	mlx_hook(img.window_mlx, 2, 1L<<0, ft_move_player, &img);
    mlx_loop (img.ptr_mlx);
}
int main(int ac, char **av)
{
	if(!ft_ber_checker(av[1]))
	{
		write(1, "the file is not map\n", 20);
		return 0;
	}
	int fd = open(av[1], O_RDONLY);
	char *map = get_map(fd);
	if (ac == 2)
	{
		if(!ft_checkmap(map))
			return 0;
		global_map = ft_size(map);
		free(map);
		ft_screen(global_map);
	}
	else
		write(1, "argument less", 13);
}
