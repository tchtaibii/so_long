/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map-calcule.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:00:55 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/13 01:24:03 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	**ft_size(char *str)
{
	int		w;
	int		h;
	char	**spt;

	w = 0;
	spt = ft_split(str, '\n');
	while (spt[w])
	{
		h = 0;
		while (spt[w][h] != '\0')
			h++;
		w++;
	}
	g_map_height = h * 68;
	g_map_weight = w * 68;
	return (spt);
}
