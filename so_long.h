/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 14:55:18 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/10 21:14:32 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <mlx.h>
#include <stdio.h>
#include "functions/functions.h"
#define  BUFFER_SIZE 1

#define i_empty "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/0.xpm"
#define i_player "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/playerUD.xpm"
#define i_playerL "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/playerL.xpm"
#define i_playerR "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/playerR.xpm"
#define i_wall "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/1.xpm"
#define i_exit_o "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/eo.xpm"
#define i_exit_c "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/ec.xpm"
#define i_coin "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/c.xpm"

char **global_map;
int coin_fnum;
int coin_num;
typedef struct s_img
{
    void *ptr_mlx;
    void *window_mlx;
    void *image;
    void *player;
    void *playerR;
    void *playerL;
    void *wall;
    void *empty;
    void *exit_c;
    void *exit_o;
    void *coin;
    int hei;
    int wei;
    int playery;
    int playerx;
    int emptyx;
    int emptyy;
    int a;
    int b;
    
}   t_img;
typedef struct s_player
{
    int x;
    int y;
} t_player;

int ft_move_player(int key, t_img *img);
void ft_move_down(int key, t_img *img);
void ft_move_up(int key, t_img *img);
void ft_move_right(int key, t_img *img);
void ft_move_left(int key, t_img *img);
#endif
