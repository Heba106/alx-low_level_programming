#include <stdlib.h>
#include <time.h>

/**

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive");
	else if (n < 0)
		printf("%i is negative");
	else
		printf("%i is zero");
	
	return(0);
}
