/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:46:16 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/12/24 15:36:12 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "so_long.h"

/*int     keyhook(int keycode,void *mlx,void *win)
{   
        if (keycode == 53)
            exit(EXIT_SUCCESS);
        
        return (0);
}*/

/*void ft_intro()
{
    void *ptr_mlx;
    void *window_mlx;
    void *image;
    int w=1242;
    int h=1728;

    ptr_mlx = mlx_init();
    window_mlx = mlx_new_window (ptr_mlx, 1242, 1728, "SO LONG" );
    image = mlx_xpm_file_to_image (ptr_mlx, "../image.xpm",&w,&h);
    mlx_put_image_to_window(ptr_mlx, window_mlx, image, 0 , 0);
    mlx_key_hook(window_mlx,keyhook,0);
    mlx_loop (ptr_mlx);
}
int main()
{
    printf("%s", ft_wall());    
}*/
//gcc so_long.c -lmlx -framework OpenGL -framework AppKit
//man /usr/share/man/man3/mlx_

int main(int ac, char **av)
{
    int fd = open(av[1], O_RDONLY);
    char *map = get_map(fd);
    int i;
    int j;
    int k;
    
    if (ac == 2)
    {
        if (!char_check(map, 0, 0, 0))
            return 0;
        if (!up_wall(map, 0))
            return 0;
        i = up_wall(map, 0);
        if (!map_rect(map, i, i, 0))
            return 0;
        k = map_rect(map, i, i, 0);
        i = ft_strlen1(map) - 1;
        if(!low_wall(map, i, 0))
            return 0;
        j = low_wall(map, i, 0);
        
        if (!map_rect2(map, j, k))
            return 0;
        write(1, "ur map is great", 15);
        return 0;
    }
    else
        write(1, "argument less", 13);
}