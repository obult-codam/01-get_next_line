/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_bonus.h                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: obult <obult@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 15:36:50 by obult         #+#    #+#                 */
/*   Updated: 2020/12/14 16:36:25 by obult         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# include <stdlib.h>
# define MAX_FD 50

int		ft_strclen(char *s, char c);
char	*ft_addington(char *og, char *add);
int		get_next_line(int fd, char **line);
int		bufferfix(char *buff);
void	os_cpy(char *dst, char *src);

#endif
