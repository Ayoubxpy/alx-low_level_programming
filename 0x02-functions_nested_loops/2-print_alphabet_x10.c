#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Description:prints 10 times the alphabet, in lowercase
 * Return:0(success)
*/
void print_alphabet_x10(void);
{
	int x;
	int alp;

	for (x = 1; x <= 10; x++)
	{
		for (alp = 97; alp <= 122; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
