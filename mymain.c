#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int		main(void)
{
	char *line;


	line = 0;
	int fd1 = open("tests/normal.txt", O_RDONLY);
	printf("------output------\n");
	while (get_next_line(fd1, &line))
	{
		printf("line: %s\n", line);
	}
	printf("line: %s\n", line);
	free(line);

	return (0);
}