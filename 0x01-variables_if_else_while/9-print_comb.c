#include <stdio.h>

/**
 * main - main entry point
 * Description:prints the number with comma and spaces
 * Return:0(success)
*/

int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
		if (number == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
