/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   so_long.h										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/12/24 14:55:18 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/02/10 22:36:10 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <mlx.h>
# include <stdio.h>

# define  BUFFER_SIZE 1
# define I_EMPTY "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/0.xpm"
# define I_PLAYER "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/pUD.xpm"
# define I_PLAYERL "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/pl.xpm"
# define I_PLAYERR "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/pr.xpm"
# define I_WALL "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/1.xpm"
# define I_EXIT_O "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/eo.xpm"
# define I_EC "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/ec.xpm"
# define I_COIN "/Users/tchtaibi/Desktop/so_long/imgs/xpm/spongebob/c.xpm"

int		g_map_height;
int		g_map_weight;
int		g_coin_fnum;
int		g_coin_num;
int		g_moves;
char	**g_global_map;

typedef struct s_img
{
	int		a;
	int		b;
	int		hei;
	int		wei;
	void	*p_m;
	void	*w_m;
	void	*image;
	void	*player;
	void	*playerr;
	void	*playerl;
	void	*wall;
	void	*empty;
	void	*ec;
	void	*exit_o;
	void	*coin;
}	t_img;

typedef struct s_player
{
	int		x;
	int		y;
}	t_player;

int		ft_checkmap(char *map);
int		char_check(char *map, int e, int p);
int		ft_strlen(char *str);
int		up_wall(char *map, int i);
int		low_wall(char *map, int i, int j);
int		map_rect(char *map, int j, int i, int k);
int		map_rect2(int j, int k);
int		ft_move_player(int key, t_img *img);
int		ft_ber_checker(char *string);
int		check_line(char *s);
int		exit_mouse(int key);
void	ft_screen(t_img *img);
void	ft_move_down(int key, t_img *img);
void	ft_move_up(int key, t_img *img);
void	ft_move_right(int key, t_img *img);
void	ft_move_left(int key, t_img *img);
void	ft_move_left_if(t_img *img);
void	ft_move_right_if(t_img *img);
void	ft_move_up_if(t_img *img);
void	ft_move_down_if(t_img *img);
char	*get_map(int fd);
char	*ft_strdup(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, int start, int len);
char	*ft_strjoin1(char *s1, char *s2);
char	**ft_split(char *s, char c);
char	**ft_size(char *str);

#endif
