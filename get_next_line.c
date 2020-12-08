#include <unistd.h>
#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	int	len;
	static char		buff[BUFFER_SIZE + 1];

	*line = ft_addington(0, buff);
	if (bufferfix(buff))
		return (1);
	ft_bzero(buff, BUFFER_SIZE + 1);
	len = read(fd, buff, BUFFER_SIZE);
	while (len >= 0)
	{
		*line = ft_addington(*line, buff);
		if (!(*line))
			return (-1);
		if (len < BUFFER_SIZE)
			return (0);
		if (ft_strclen(buff, '\n') < BUFFER_SIZE)
		{
			bufferfix(buff);
			return (1);
		}
		ft_bzero(buff, BUFFER_SIZE);
		len = read(fd, buff, BUFFER_SIZE);
	}
	return (-1);
}
