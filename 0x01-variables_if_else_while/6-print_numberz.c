#include <stdio.h>

/**
 * main - main entry point
 * Description:prints all single digit numbers of base 10 starting from 0
 * Return:0(success)
*/

int main(void)
{
	int numberz;

	for (numberz = 0; numberz <= 9 ; numberz++)
	{
	putchar(numberz + 48);
	}
	putchar('\n');
	return (0);
}
