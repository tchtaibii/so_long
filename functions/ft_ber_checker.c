/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ber_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:02:01 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/12 21:53:06 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_ber_checker(char *string)
{
	int	index;

	index = 0;
	if (!string)
		return (0);
	while (string[index])
	{
		if (string[index] == '.' && string[index + 1] == 'b' \
			&& string[index + 2] == 'e' && string[index + 3] == 'r' \
			&& string[index + 4] == '\0')
			return (1);
		index++;
	}
	write(1, "the file is not map\n", 20);
	return (0);
}
