/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_rectengle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:02:41 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/12 22:18:47 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	map_rect(char *map, int j, int i, int k)
{
	k = i + 1;
	i *= 2;
	while (map[j])
	{
		j++;
		if (map[j] == '\n')
		{
			if ((i + 1) != j)
			{
				write(1, "Error\nmap isn't rect", 20);
				return (0);
			}
			else
				i += k;
		}
	}
	return (k);
}

int	map_rect2(int j, int k)
{
	if (j + 1 != k)
	{
		write(1, "Error\nmap isn't rect", 20);
		return (0);
	}
	return (1);
}
