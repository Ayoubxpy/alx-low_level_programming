#include <stdio.h>

/**
 * main - main entry point
 * Description:prints the alphabet in lowercase
 * Return:0(success)
*/

int main(void)
{
	int numberl = 97;

	while (numberl <= 122)
	{
		if (numberl == 101 || numberl == 113)
		{
			numberl++;
			continue;
		}
		putchar(numberl);
		numberl++;
	}
	putchar('\n');
	return (0);
}
