/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 14:55:18 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/12/24 15:25:04 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <mlx.h>
#include <stdio.h>
#define  BUFFER_SIZE 1


char *get_next_line(int fd);
char *get_map(int fd);
int char_check(char *map ,int e, int o, int p);
int ft_strlen1(char *str);
int up_wall(char *map, int i);
int low_wall(char *map, int i, int j);
int map_rect(char *map, int j ,int i, int k);
int map_rect2(char *map, int j, int k);



#endif