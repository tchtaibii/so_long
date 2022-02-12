/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wall.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:02:58 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/12 16:15:46 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int ft_checkmap(char *map)
{
	int i;
	int j;
	int k;

	if (!char_check(map, 0, 0, 0))
			return 0;
	if (!up_wall(map, 0))
		return 0;
	i = up_wall(map, 0);
	if (!map_rect(map, i, i, 0))
		return 0;
	k = map_rect(map, i, i, 0);
	i = ft_strlen(map) - 1;
	if(!low_wall(map, i, 0))
		return 0;
	j = low_wall(map, i, 0);
	if (!map_rect2(map, j, k))
		return 0;
	return 1;
}
