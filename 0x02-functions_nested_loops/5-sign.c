#include "main.h"

/**
 * _sign - function that prints the sign of a number
 * @n:the input number int
 * Return:0 for letters 1 for the rest
*/

int print_sign(int n);
{
	int n;

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
