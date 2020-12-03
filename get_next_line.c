/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: oswin <oswin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 23:33:44 by oswin         #+#    #+#                 */
/*   Updated: 2020/11/29 00:30:39 by oswin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char		buff[BUFFER_SIZE + 1];
	int				state

	if (*buff)
		*line = ft_addington(*line, buff);
	if (*line[ft_strclen(*line)] == '\n')
		return (*line);
	while(looper())
	{
		state = read(fd, buff, BUFFER_SIZE);
		buff[state] = 0;
		if (state == -1)
			return (-1)
		*line = ft_addington(*line, buff);
		if (state < BUFFER_SIZE)
			return (0);
		
	}
	return (1)
}