/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:00:37 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/13 01:33:32 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_move_left_if(t_img *img)
{
	if (g_global_map[img->b][img->a - 1] != '1' \
			&& g_global_map[img->b][img->a - 1] != 'E')
	{
		if (g_global_map[img->b][img->a - 1] == 'C' \
			|| g_global_map[img->b][img->a - 1] == '0' \
			|| g_global_map[img->b][img->a - 1] == 'P')
		{
			if (g_global_map[img->b][img->a - 1] == 'C')
				if (g_coin_num < g_coin_fnum)
					g_coin_num++;
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->empty, img->a * 68, img->b * 68);
			img->a--;
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->playerl, img->a * 68, img->b * 68);
			printf("moves = %d\n", ++g_moves);
		}
	}
}

void	ft_move_right_if(t_img *img)
{
	if (g_global_map[img->b][img->a + 1] != '1' \
		&& g_global_map[img->b][img->a + 1] != 'E')
	{
		if (g_global_map[img->b][img->a + 1] == 'C' \
			|| g_global_map[img->b][img->a + 1] == '0' \
			|| g_global_map[img->b][img->a + 1] == 'P')
		{
			if (g_global_map[img->b][img->a + 1] == 'C')
				if (g_coin_num < g_coin_fnum)
					g_coin_num++;
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->empty, img->a * 68, img->b * 68);
			img->a++;
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->playerr, img->a * 68, img->b * 68);
			printf("moves = %d\n", ++g_moves);
		}
	}
}

void	ft_move_down_if(t_img *img)
{
	if (g_global_map[img->b + 1][img->a] != '1' \
			&& g_global_map[img->b + 1][img->a] != 'E')
	{
		if (g_global_map[img->b + 1][img->a] == 'C' \
			|| g_global_map[img->b + 1][img->a] == '0' \
			|| g_global_map[img->b + 1][img->a] == 'P')
		{
			if (g_global_map[img->b + 1][img->a] == 'C')
				if (g_coin_num < g_coin_fnum)
					g_coin_num++;
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->empty, img->a * 68, img->b * 68);
			img->b++;
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->player, img->a * 68, img->b * 68);
			printf("moves = %d\n", ++g_moves);
		}
	}
}

void	ft_move_up_if(t_img *img)
{
	if (g_global_map[img->b - 1][img->a] != '1' \
		&& g_global_map[img->b - 1][img->a] != 'E')
	{
		if (g_global_map[img->b - 1][img->a] == 'C' \
			|| g_global_map[img->b - 1][img->a] == '0' \
			|| g_global_map[img->b - 1][img->a] == 'P')
		{
			if (g_global_map[img->b - 1][img->a] == 'C')
				if (g_coin_num < g_coin_fnum)
					g_coin_num++;
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->empty, img->a * 68, img->b * 68);
			img->b--;
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->player, img->a * 68, img->b * 68);
			printf("moves = %d\n", ++g_moves);
		}
	}
}
