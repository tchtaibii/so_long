/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:46:16 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/09 16:47:54 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ft_screen(char **str)
{
	t_player p;
	int i = 0;
	int j;
	int x;
	int y = 0;
	t_img img;
	img.ptr_mlx = mlx_init();
	printf("1\n");
    img.window_mlx = mlx_new_window (img.ptr_mlx, map_height, map_weight, "SO LONG" );
	printf("2\n");
	img.player = mlx_xpm_file_to_image(img.ptr_mlx, i_player, &img.hei, &img.wei);
	printf("3\n");
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
			if(str[i][j] == '1')
				mlx_put_image_to_window(img.ptr_mlx, img.window_mlx, img.wall, x , y);
			if(str[i][j] == 'E')
				mlx_put_image_to_window(img.ptr_mlx, img.window_mlx, img.exit_c, x , y);
			if(str[i][j] == 'C')
				mlx_put_image_to_window(img.ptr_mlx, img.window_mlx, img.coin, x , y);
			if(str[i][j] == 'P')
				mlx_put_image_to_window(img.ptr_mlx, img.window_mlx, img.player, x , y);
			j++;
			x += 68;
		}
		y += 68;
		i++;
	}
	mlx_hook(img.window_mlx, 2, 1L<<0, ft_move_player, &p);
    mlx_loop (img.ptr_mlx); 
}
int main(int ac, char **av)
{
	
    int fd = open(av[1], O_RDONLY);
    char *map = get_map(fd);
    if (ac == 2)
    {
        if(!ft_checkmap(map))
            return 0;
        global_map = ft_size(map);
		ft_screen(global_map);
    }
    else
        write(1, "argument less", 13);
}