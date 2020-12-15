/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_bonus.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: oswin <oswin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 15:49:41 by oswin         #+#    #+#                 */
/*   Updated: 2020/12/14 16:29:59 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "get_next_line_bonus.h"

int		get_next_line(int fd, char **line)
{
	int	len;
	static char		buff[MAX_FD][BUFFER_SIZE + 1];

	*line = ft_addington(0, buff[fd]);
	if (!(*line))
		return (-1);
	if (bufferfix(buff[fd]))
		return (1);
	len = read(fd, buff[fd], BUFFER_SIZE);
	buff[fd][len] = 0;
	while (len > 0)
	{
		*line = ft_addington(*line, buff[fd]);
		if (!(*line))
			return (-1);
		if (bufferfix(buff[fd]))
			return (1);
		len = read(fd, buff[fd], BUFFER_SIZE);
		buff[fd][len] = 0;
	}
	if (!len)
		return (0);
	return (-1);
}
