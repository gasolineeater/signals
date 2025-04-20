#include "../elvi.h"

int	main(void)
{
	int	id;

	id = fork();
	if (id == 0)
		printf("Hello World child procces id: %d\n", id);
	else
		printf("Hello World main procces id : %d\n", id);
}
