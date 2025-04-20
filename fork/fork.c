#include "../elvi.h"

int	main(void)
{
	int	id;
	int	i;
	int	n;

	id = fork();
	if (id == 0)
		n = 1;
	else
		n = 6;
	i = n;
	while (i < n + 5)
	{
		printf("%d", i);
		fflush(stdout);
		i++;
	}
	printf("\n");
}
