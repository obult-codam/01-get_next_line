/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: oswin <oswin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 23:45:37 by oswin         #+#    #+#                 */
/*   Updated: 2020/12/17 08:44:06 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

int		ft_strclen(char *s, char c)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	os_cpy(char *dst, char *src)
{
	int		i;

	i = 0;
	while (src[i] && src[i] != '\n')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
}

char	*ft_addington(char *og, char *add)
{
	char	*temp;
	int		i;

	i = 0;
	temp = malloc(ft_strclen(og, '\n') + ft_strclen(add, '\n') + 1);
	if (!temp)
	{
		free(og);
		return (0);
	}
	if (og)
	{
		while (og[i])
		{
			temp[i] = og[i];
			i++;
		}
		free(og);
	}
	os_cpy(&temp[i], add);
	return (temp);
}

int		bufferfix(char *buff)
{
	char	*temp;
	int		i;

	i = 0;
	temp = buff;
	while (*temp != '\n' && *temp)
		temp++;
	if (*temp == '\n')
		temp = temp + 1;
	else
		return (0);
	while (temp[i])
	{
		buff[i] = temp[i];
		i++;
	}
	buff[i] = 0;
	return (1);
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
