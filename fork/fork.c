#include "../elvi.h"

int	main(void)
{
	int	id;

	id = fork();
	printf("Hello World id: %d\n", id);
}
