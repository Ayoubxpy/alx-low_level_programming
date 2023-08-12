#include <stdio.h>

/**
 * main - main entry point
 * Description:prints the alphabet in lowercase + numbers
 * Return:0(success)
*/

int main(void)
{
	int number;
	int alp;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	for (alp = 97; alp <= 102; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
