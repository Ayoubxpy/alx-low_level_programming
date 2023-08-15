#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 * Description:prints the alphabet, in lowercase
 * Return:0(success)
*/

void print_alphabet(void)
{
	int alp;

	for (alp = 97; alp <= 122; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
