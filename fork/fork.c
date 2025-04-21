#include "../elvi.h"

int	main(void)
{
	int	id;
	int	i;
	int	n;
	
	i = 1;
	id = fork();
	if (id == 0)
		n = 1;
	else
		n = 6;
	if (id != 0)
		wait(NULL); 
	while (i < n + 5)
	{
		printf("%d ", i);
		fflush(stdout);
		i++;
	}
	if (id != 0)
		printf("\n");
}
