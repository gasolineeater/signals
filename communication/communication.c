#include "../elvi.h"

int	main(int ac, char **av)
{
	int	id;
	int fd[2];

	id = fork();
	if (pipe(fd) == -1)
		printf("An error occurred when trying to open the pipe.\n");
	if (id == 0)
	{
		close(fd[0]);
		printf("Input : %s\n", av[1]);
		write(fd[1], &av[1], sizeof(int));
		close(fd[1]);
	}
}
