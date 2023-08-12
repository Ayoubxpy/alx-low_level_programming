#include <stdio.h>

/**
 * main - main entry point
 * Description:prints the alphabet in lowercase
 * Return:0(success)
*/
int main(void)
{
	int alp = 122;

	while (alp >= 97)
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
