#include <main.h>

/**
 * main - main entry point
 * Description:prints the alphabet, in lowercase, followed by a new line
 * Return:0(success)
*/

void print_alphabet(void);
{
	int alp;

	for (alp = 97; alp <= 122; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}

