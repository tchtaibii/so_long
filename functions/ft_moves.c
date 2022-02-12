/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:00:37 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/12 15:38:41 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void ft_move_left(int key, t_img *img)
{
	if (key == 0 || key == 123)
	{
		if(global_map[img->b][img->a - 1] != '1' && global_map[img->b][img->a - 1] != 'E')
		{
			if(global_map[img->b][img->a - 1] == 'C' || global_map[img->b][img->a - 1] == '0' || global_map[img->b][img->a - 1] == 'P')
			{
				if(global_map[img->b][img->a - 1] == 'C')
				if (coin_num < coin_fnum)
					coin_num++;
				mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
				img->a--;
				mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->playerL, img->a * 68, img->b * 68);
				ft_printf("moves = %d\n", ++moves);
			}
		}
		else if (global_map[img->b][img->a - 1] == 'E' && coin_num == coin_fnum)
		{
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
			img->a--;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->playerL, img->a * 68, img->b * 68);
			mlx_destroy_window(img->ptr_mlx, img->window_mlx);
			ft_printf("moves = %d\n", ++moves);
			write(1, "YOU WIN", 7);
			exit(1);
		}
	}
}
void ft_move_right(int key, t_img *img)
{
	if (key == 2 || key == 124)
	{
		if(global_map[img->b][img->a + 1] != '1' && global_map[img->b][img->a + 1] != 'E')
		{
			if(global_map[img->b][img->a + 1] == 'C' || global_map[img->b][img->a + 1] == '0' || global_map[img->b][img->a + 1] == 'P')
			{
				if(global_map[img->b][img->a + 1] == 'C')
				{
				if (coin_num < coin_fnum)
					coin_num++;
				}
				mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
				img->a++;
				mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->playerR, img->a * 68, img->b * 68);
				ft_printf("moves = %d\n", ++moves);
			}
		}
		else if (global_map[img->b][img->a + 1] == 'E' && coin_num == coin_fnum)
		{
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
			img->a++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->playerR, img->a * 68, img->b * 68);
			mlx_destroy_window(img->ptr_mlx, img->window_mlx);
			ft_printf("moves = %d\n", ++moves);
			write(1, "YOU WIN", 7);
			exit(1);
		}
	}
}
void ft_move_down(int key, t_img *img)
{
	if (key == 1 || key == 125)
	{
		if (global_map[img->b + 1][img->a] != '1' && global_map[img->b + 1][img->a] != 'E')
		{
			if (global_map[img->b + 1][img->a] == 'C' || global_map[img->b + 1][img->a] == '0' \
				|| global_map[img->b + 1][img->a] == 'P')
			{
				if(global_map[img->b + 1][img->a] == 'C')
				if (coin_num < coin_fnum)
					coin_num++;
				mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
				img->b++;
				mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->player, img->a * 68, img->b * 68);
				ft_printf("moves = %d\n", ++moves);
			}
		}
		else if (global_map[img->b + 1][img->a] == 'E' && coin_num == coin_fnum)
		{
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
			img->b++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->player, img->a * 68, img->b * 68);
			mlx_destroy_window(img->ptr_mlx, img->window_mlx);
			ft_printf("moves = %d\n", ++moves);
			write(1, "YOU WIN", 7);
			exit(1);
		}
	}
}
void ft_move_up(int key, t_img *img)
{
	if (key == 13 || key == 126)
	{
		if (global_map[img->b - 1][img->a] != '1' && global_map[img->b - 1][img->a] != 'E')
		{
			if (global_map[img->b - 1][img->a] == 'C' || global_map[img->b - 1][img->a] == '0' || global_map[img->b - 1][img->a] == 'P')
			{
				if (global_map[img->b - 1][img->a] == 'C')
					if (coin_num < coin_fnum)
						coin_num++;
				mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
				img->b--;
				mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->player, img->a * 68, img->b * 68);
				ft_printf("moves = %d\n", ++moves);
			}
		}
		else if (global_map[img->b - 1][img->a] == 'E' && coin_num == coin_fnum)
		{
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->empty, img->a * 68, img->b * 68);
			img->b--;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, img->player, img->a * 68, img->b * 68);
			mlx_destroy_window(img->ptr_mlx, img->window_mlx);
			ft_printf("moves = %d\n", ++moves);
			write(1, "YOU WIN", 7);
			exit(1);
		}
	}
}
int	ft_move_player(int key, t_img *img)
{
	ft_move_down(key, img);
	ft_move_up(key, img);
	ft_move_right(key, img);
	ft_move_left(key, img);
	if (key == 53 || key == 12 || key < 0)
	{
		ft_printf("EXIT\n");
		exit(1);
	}
	return 0;
}
