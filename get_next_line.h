/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: oswin <oswin@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 18:08:14 by oswin         #+#    #+#                 */
/*   Updated: 2020/12/09 16:13:18 by oswin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# include <stdlib.h>

int		ft_strclen(char *s, char c);
char	*ft_addington(char *og, char *add);
int		get_next_line(int fd, char **line);
int		bufferfix(char *buff);
void	ft_bzero(void *s, int n);
char	*ft_strccpy(char *d, char *s, char c);

#endif
