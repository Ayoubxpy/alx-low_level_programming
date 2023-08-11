#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main entry point
 * Description:function that check the last digit of n is less or great
 * Return:0(success)
*/

int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
	if (lastdigit < 6 && lastdigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
	if (lastdigit == 0)
		printf("Last digit of %d is %d and is 0", n, lastdigit);
	return (0);
}
