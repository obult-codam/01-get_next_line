/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: oswin <oswin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 23:45:37 by oswin         #+#    #+#                 */
/*   Updated: 2020/12/09 20:01:03 by oswin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char	*ft_addington(char *og, char *add)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
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
	while (add[j] && add[j] != '\n')
	{
		temp[i + j] = add[j];
		j++;
	}
	temp[i + j] = 0;
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
