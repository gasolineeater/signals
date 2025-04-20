#include "../elvi.h"

int	main(void)
{
	int	id;

	id = fork();
	if (id != 0)
		fork();
	printf("Hello World\n");
}
