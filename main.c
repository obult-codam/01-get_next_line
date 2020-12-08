/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/25 18:41:54 by kfu           #+#    #+#                 */
/*   Updated: 2020/11/27 18:34:03 by oswin         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(void )
{
	char *line = "";
	int fd = open("tests/empty.txt", O_RDONLY);
	printf("------EMPTY------\n");
	printf("Result: %i\n", get_next_line(fd, &line));
	printf("String: %s\n\n", line);

	char *line1 = "";
	int fd1 = open("tests/oneline.txt", O_RDONLY);
	printf("------ONE LINE------\n");
	printf("Result: %i\n", get_next_line(fd1, &line1));
	printf("String: %s\n\n", line1);
	free(line1);

	char *line2 = "";
	int fd2 = open("tests/normal.txt", O_RDONLY);
	printf("------NORMAL + AGAIN------\n");
	get_next_line(fd2, &line2);
	free(line2);
	get_next_line(fd2, &line2);
	free(line2);
	get_next_line(fd2, &line2);
	free(line2);
	get_next_line(fd2, &line2);
	free(line2);
	printf("Result: %i\n", get_next_line(fd2, &line2));
	printf("String: %s\n\n", line2);
	free(line2);

	char *line3 = "";
	int fd3 = open("tests/normalspace.txt", O_RDONLY);
	printf("------NORMAL WITH SPACE------\n");
	printf("Result: %i\n", get_next_line(fd3, &line3));
	printf("String: %s\n\n", line3);
	free(line3);

	char *line4 = "";
	int fd4 = open("tests/longline.txt", O_RDONLY);
	printf("------LONG LINE------\n");
	printf("Result: %i\n", get_next_line(fd4, &line4));
	printf("String: %s\n\n", line4);
	free(line4);

	char *line5 = "";
	int fd5 = open("tests/whitespace.txt", O_RDONLY);
	printf("------WHITESPACE------\n");
	printf("Result: %i\n", get_next_line(fd5, &line5));
	printf("String: %s\n\n", line5);
	free(line5);

	char *line6 = "";
	int fd6 = open("tests/multiplewhite.txt", O_RDONLY);
	printf("------MULTI WHITE------\n");
	printf("Result: %i\n", get_next_line(fd6, &line6));
	printf("String: %s\n\n", line6);
	free(line6);

	char *line7 = "";
	int fd7 = open("tests/katherine.txt", O_RDONLY);
	printf("------ERROR------\n");
	printf("Result: %i\n", get_next_line(fd7, &line7));
	printf("String: %s\n\n", line7);

	char *line8 = "";
	int fd8 = 42;
	printf("------ERROR FD------\n");
	printf("Result: %i\n", get_next_line(fd8, &line8));
	printf("String: %s\n\n", line8);

	char *line9 = "";
	int fd9 = open("tests/oneletter.txt", O_RDONLY);
	printf("------ONE LETTER------\n");
	printf("Result: %i\n", get_next_line(fd9, &line9));
	printf("String: %s\n\n", line9);
	free(line9);

	return (0);
}