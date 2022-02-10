/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 14:55:10 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/10 19:01:39 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int char_check(char *map ,int e, int o, int p)
{
    int i;
    t_img img;
    
    i = 0;
    while (map[i])
        {
            if(map[i] != '\n' && map[i] == '0' && map[i] == 'E' && map[i] == 'C' && map[i] == '1'&& map[i] == 'P')
            {
                write(1, "char less detected", 18);
                return 0;
            }
            if(map[i] == 'E')
                e++;
            if(map[i] == 'P')
                p++;
            if(map[i] == 'C')
                coin_fnum++;
            if((map[i] == '\n' && map[i - 1] != '1') || (map[i] == '\n' && map[i + 1] != '1'))
            {
                write(1, "FIX UR EDGES", 12);
                return 0;
            }
            i++;
        }
    if (coin_fnum < 1 || e < 1 || p != 1)
    {
        write(1, "more or less than objects", 25);
        
        return 0;
    }
    return 1;
}