/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:46:16 by tchtaibi          #+#    #+#             */
/*   Updated: 2021/12/24 01:50:25 by tchtaibi         ###   ########.fr       */
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


int ft_strlen1(char *str)
{
    int i = 0;
    
    if(!str)
        return 0;
    while (str[i])
        i++;
    return i;
}
int main(int ac, char **av)
{
    int fd = open(av[1], O_RDONLY);
    char *map = get_map(fd);
    int i = 0;
    int c = 0;
    int e = 0;
    int p = 0;
    while (map[i])
    {
        if(map[i] == 'E')
            e++;
        if(map[i] == 'P')
            p++;
        if(map[i] == 'C')
            c++;
        if((map[i] == '\n' && map[i - 1] != '1') || (map[i] == '\0' && map[i - 1] != '1'))
        {
            write(1, "FIX UR EDGES", 12);
            return 0;
        }
        i++;
    
    }
    i = 0;
    if (c <= 0)
    {
        write(1, "ERROR C", 7);
        return 0;
    }
    if (e != 1)
    {
        write(1, "ERROR E", 7);
        return 0;
    }
    if (p != 1)
    {
        write(1, "ERROR p", 7);
        return 0;
    }
    while (map[i] != '\n')
    {
        if(map[i] != '1')
        {
            write(1, "fix ur up wall", 14);
            return 0;
        }
        i++;
    }
    i = ft_strlen1(map) - 1;
    while (map[i] != '\n')
    {
        if(map[i] != '1')
        {
            write(1, "fix ur low wall", 15);
            return 0;
        }
        i--;
    }
    write(1, "ur map is great", 15);
    return 0;
}