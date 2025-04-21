#include "../elvi.h"

int	main(void)
{
	int	id;

	id = fork();
	printf("%d ", getpid());
}
