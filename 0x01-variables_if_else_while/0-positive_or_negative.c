#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - main entry point
*Description:this function check if number is positive or negative or its 0
*Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
