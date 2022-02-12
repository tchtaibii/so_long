/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   functions.h										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/12/24 14:55:18 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/02/10 16:33:15 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "../so_long.h"

#define  BUFFER_SIZE 1

int map_height;
int map_weight;

char	*get_map(int fd);
int	     ft_checkmap(char *map);
int	    char_check(char *map ,int e, int o, int p);
int	    ft_strlen(char *str);
int	    up_wall(char *map, int i);
int	    low_wall(char *map, int i, int j);
int	    map_rect(char *map, int j ,int i, int k);
int	    map_rect2(char *map, int j, int k);
char	**ft_split(char *s, char c);
char	**ft_size(char *str);
void    ft_screen(char **str, int i, int y);
void    ft_screen2(char *str);
int		ft_ber_checker(char *string);
char	*ft_strdup(char *str);
int     check_line(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, int start, int len);

#endif
