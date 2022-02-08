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
