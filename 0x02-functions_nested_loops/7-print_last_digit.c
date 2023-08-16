#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: input number int
 * Return:Returns the value of the last digit
*/

int print_last_digit(int n)
{
	int la;

	la = n % 10;
	if (la < 0)
	{
		_putchar(-la + 48);
		return (-la);
	}
	else
	{
		_putchar(la + 48);
		return (la);
	}
}
