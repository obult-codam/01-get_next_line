/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: oswin <oswin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/11 16:08:40 by oswin         #+#    #+#                 */
/*   Updated: 2020/12/16 21:19:34 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char		buff[BUFFER_SIZE + 1];

	if (!line)
		return (-1);
	return (get_next_lineb(fd, line, buff));
}

int		get_next_lineb(int fd, char **line, char *buff)
{
	int	len;

	*line = ft_addington(0, buff);
	if (!(*line))
		return (-1);
	if (bufferfix(buff))
		return (1);
	len = read(fd, buff, BUFFER_SIZE);
	buff[len] = 0;
	while (len > 0)
	{
		*line = ft_addington(*line, buff);
		if (!(*line))
			return (-1);
		if (bufferfix(buff))
			return (1);
		len = read(fd, buff, BUFFER_SIZE);
		buff[len] = 0;
	}
	if (!len)
		return (0);
	return (-1);
}