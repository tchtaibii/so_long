/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:00:37 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/12 22:05:26 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_move_left_if(t_img *img)
{
	if (global_map[img->b][img->a - 1] != '1' \
			&& global_map[img->b][img->a - 1] != 'E')
	{
		if (global_map[img->b][img->a - 1] == 'C' \
			|| global_map[img->b][img->a - 1] == '0' \
			|| global_map[img->b][img->a - 1] == 'P')
		{
			if (global_map[img->b][img->a - 1] == 'C')
				if (coin_num < coin_fnum)
					coin_num++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, \
			img->empty, img->a * 68, img->b * 68);
			img->a--;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, \
			img->playerL, img->a * 68, img->b * 68);
			printf("moves = %d\n", ++moves);
		}
	}
}

void	ft_move_right_if(t_img *img)
{
	if (global_map[img->b][img->a + 1] != '1' \
		&& global_map[img->b][img->a + 1] != 'E')
	{
		if (global_map[img->b][img->a + 1] == 'C' \
			|| global_map[img->b][img->a + 1] == '0' \
			|| global_map[img->b][img->a + 1] == 'P')
		{
			if (global_map[img->b][img->a + 1] == 'C')
				if (coin_num < coin_fnum)
					coin_num++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, \
			img->empty, img->a * 68, img->b * 68);
			img->a++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, \
			img->playerR, img->a * 68, img->b * 68);
			printf("moves = %d\n", ++moves);
		}
	}
}

void	ft_move_down_if(t_img *img)
{
	if (global_map[img->b + 1][img->a] != '1' \
			&& global_map[img->b + 1][img->a] != 'E')
	{
		if (global_map[img->b + 1][img->a] == 'C' \
			|| global_map[img->b + 1][img->a] == '0' \
			|| global_map[img->b + 1][img->a] == 'P')
		{
			if (global_map[img->b + 1][img->a] == 'C')
				if (coin_num < coin_fnum)
					coin_num++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, \
			img->empty, img->a * 68, img->b * 68);
			img->b++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, \
			img->player, img->a * 68, img->b * 68);
			printf("moves = %d\n", ++moves);
		}
	}
}

void	ft_move_up_if(t_img *img)
{
	if (global_map[img->b - 1][img->a] != '1' \
		&& global_map[img->b - 1][img->a] != 'E')
	{
		if (global_map[img->b - 1][img->a] == 'C' \
			|| global_map[img->b - 1][img->a] == '0' \
			|| global_map[img->b - 1][img->a] == 'P')
		{
			if (global_map[img->b - 1][img->a] == 'C')
				if (coin_num < coin_fnum)
					coin_num++;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, \
			img->empty, img->a * 68, img->b * 68);
			img->b--;
			mlx_put_image_to_window(img->ptr_mlx, img->window_mlx, \
			img->player, img->a * 68, img->b * 68);
			printf("moves = %d\n", ++moves);
		}
	}
}
