/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 14:55:18 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/08 17:49:42 by tchtaibi         ###   ########.fr       */
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

#define i_empty "/Users/tchtaibi/Desktop/so_long/imgs/xpm/0.xpm"
#define i_player "/Users/tchtaibi/Desktop/so_long/imgs/xpm/p.xpm"
#define i_wall "/Users/tchtaibi/Desktop/so_long/imgs/xpm/1.xpm"
#define i_exit_o "/Users/tchtaibi/Desktop/so_long/imgs/xpm/eo.xpm"
#define i_exit_c "/Users/tchtaibi/Desktop/so_long/imgs/xpm/ec.xpm"
#define i_coin "/Users/tchtaibi/Desktop/so_long/imgs/xpm/c.xpm"

typedef struct s_img
{
    void *ptr_mlx;
    void *window_mlx;
    void *image;
    void *player;
    void *wall;
    void *empty;
    void *exit_c;
    void *exit_o;
    void *coin;
    int hei;
    int wei;
    
}   t_img;



#endif