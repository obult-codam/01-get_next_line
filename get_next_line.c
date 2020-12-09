#include <unistd.h>
#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	int	len;
	static char		buff[BUFFER_SIZE + 1];

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
		if (bufferfix(buff))
			return (1);
		if (!(*line))
			return (-1);
		len = read(fd, buff, BUFFER_SIZE);
		buff[len] = 0;
	}
	if (!len)
		return (0);
	return (-1);
}
