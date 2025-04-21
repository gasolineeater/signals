#include "../elvi.h"

int	main(void)
{
	int	id;
	int	res;

	id = fork();
	if (id == 0)
		sleep(1);
	printf("Current PID: %d parent: %d\n", getpid(), getppid());
	res = wait(NULL);
	if (res == -1)
		printf("No children to wait for...\n");
	else
		printf("%d finished exec.\n", res);
}
