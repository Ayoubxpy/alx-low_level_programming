#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n:the input number int
 * Return:0 for zero  1 for the int great then 0 and -1
 * for int less then 0
*/

int print_sign(int n)
{

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
