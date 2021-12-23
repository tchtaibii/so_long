
#ifndef SO_LONG_H
#define SO_LONG_H
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <mlx.h>
#include <stdio.h>
#define  BUFFER_SIZE 1


char *get_next_line(int fd);
int ft_wall(int fd);


#endif