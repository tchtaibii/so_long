/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:46:16 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/08 12:20:11 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int ac, char **av)
{
    int fd = open(av[1], O_RDONLY);
    char *map = get_map(fd);
    
    if (ac == 2)
    {
        if(!ft_checkmap(map))
            return 0;
        ft_size(map);
    }
    else
        write(1, "argument less", 13);
}