/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: oswin <oswin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 18:08:14 by oswin         #+#    #+#                 */
/*   Updated: 2020/12/16 21:19:55 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# include <stdlib.h>

int		ft_strclen(char *s, char c);
char	*ft_addington(char *og, char *add);
int		get_next_line(int fd, char **line);
int		bufferfix(char *buff);
void	os_cpy(char *dst, char *src);
int		get_next_lineb(int fd, char **line, char *buff);

#endif
