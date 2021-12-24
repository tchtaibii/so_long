/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 14:55:18 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/12/24 16:53:41 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "../so_long.h"

#define  BUFFER_SIZE 1


char *get_map(int fd);
int ft_checkmap(char *map);
int char_check(char *map ,int e, int o, int p);
int ft_strlen1(char *str);
int up_wall(char *map, int i);
int low_wall(char *map, int i, int j);
int map_rect(char *map, int j ,int i, int k);
int map_rect2(char *map, int j, int k);



#endif