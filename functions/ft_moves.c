/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:00:37 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/13 01:34:09 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_move_left(int key, t_img *img)
{
	if (key == 0 || key == 123)
	{
		ft_move_left_if(img);
		if (g_global_map[img->b][img->a - 1] == 'E' \
			&& g_coin_num == g_coin_fnum)
		{
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->empty, img->a * 68, img->b * 68);
			img->a--;
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->playerl, img->a * 68, img->b * 68);
			mlx_destroy_window(img->p_m, img->w_m);
			printf("moves = %d\n", ++g_moves);
			write(1, "YOU WIN", 7);
			exit(1);
		}
	}
}

void	ft_move_right(int key, t_img *img)
{
	if (key == 2 || key == 124)
	{
		ft_move_right_if(img);
		if (g_global_map[img->b][img->a + 1] == 'E' \
			&& g_coin_num == g_coin_fnum)
		{
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->empty, img->a * 68, img->b * 68);
			img->a++;
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->playerr, img->a * 68, img->b * 68);
			mlx_destroy_window(img->p_m, img->w_m);
			printf("moves = %d\n", ++g_moves);
			write(1, "YOU WIN", 7);
			exit(1);
		}
	}
}

void	ft_move_down(int key, t_img *img)
{
	if (key == 1 || key == 125)
	{
		ft_move_down_if(img);
		if (g_global_map[img->b + 1][img->a] == 'E' \
			&& g_coin_num == g_coin_fnum)
		{
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->empty, img->a * 68, img->b * 68);
			img->b++;
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->player, img->a * 68, img->b * 68);
			mlx_destroy_window(img->p_m, img->w_m);
			printf("moves = %d\n", ++g_moves);
			write(1, "YOU WIN", 7);
			exit(1);
		}
	}
}

void	ft_move_up(int key, t_img *img)
{
	if (key == 13 || key == 126)
	{
		ft_move_up_if(img);
		if (g_global_map[img->b - 1][img->a] == 'E' \
			&& g_coin_num == g_coin_fnum)
		{
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->empty, img->a * 68, img->b * 68);
			img->b--;
			mlx_put_image_to_window(img->p_m, img->w_m, \
			img->player, img->a * 68, img->b * 68);
			mlx_destroy_window(img->p_m, img->w_m);
			printf("moves = %d\n", ++g_moves);
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
		printf("EXIT\n");
		exit(1);
	}
	return (0);
}
