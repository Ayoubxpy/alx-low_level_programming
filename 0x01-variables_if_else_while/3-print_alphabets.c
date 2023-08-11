#include <stdio.h>

/**
 * main - main entry point
 * Description:prints the alphabet in lowercase
 * Return:0(success)
*/

int main(void)
{
	int number = 97;
	int numberU = 65;

	while (number <= 122)
	{
		putchar(number);
		number++;
	}
	while (numberU <= 90)
	{
		putchar(numberU);
		numberU++;
	}
	putchar ('\n');
	return (0);
}
