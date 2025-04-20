#include "../elvi.h"

int	main(void)
{
	int	id;
	int	i;
	int	n;
	
	i = 0;
	n = 
	id = fork();
	if (id == 0)
		n = 1;
	else
		n = 6;
	if (id != 0)
		wait(NULL); 
	while (i < n + 5)
	{
		printf("%d", i);
		fflush(stdout);
		i++;
	}
	printf("\n");
}
