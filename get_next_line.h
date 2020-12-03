/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: oswin <oswin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 18:08:14 by oswin         #+#    #+#                 */
/*   Updated: 2020/11/30 18:12:35 by oswin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# include <stdlib.h>

int		ft_strclen(char *s, char c);
char	*ft_addington(char *og, char *add);
int		get_next_line(int fd, char **line);
void	bufferfix(char *buff);

#endif
