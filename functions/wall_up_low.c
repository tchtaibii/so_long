/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wall_up_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:02:52 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/12 21:00:50 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	up_wall(char *map, int i)
{
	while (map[i] != '\n')
	{
		if (map[i] != '1')
		{
			write(1, "Error\nfix ur up wall", 20);
			return (0);
		}
		i++;
	}
	return (i);
}

int	low_wall(char *map, int i, int j)
{
	while (map[i] != '\n')
	{
		if (map[i] != '1')
		{
			write(1, "Error\nfix ur low wall", 21);
			return (0);
		}
		i--;
		j++;
	}
	return (j);
}
