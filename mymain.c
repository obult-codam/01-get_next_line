#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int		main(void)
{
	char *line;
	int fd;

	line = 0;
	int fd1 = open("tests/normal.txt", O_RDONLY);
	int fd2 = open("tests/file2", O_RDONLY);
	fd = fd1;
	printf("------output------\n");
	while (get_next_line(fd, &line))
	{
		printf("line: %s\n", line);
		if (fd == fd1)
			fd = fd2;
		else
			fd = fd1;
	}
	printf("line: %s\n", line);
	free(line);

	return (0);
}