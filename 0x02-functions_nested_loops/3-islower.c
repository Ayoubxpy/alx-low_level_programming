#include "main.h"

/**
 * _islower - show if the charachter is lower or not
 * @c: the charcter in ASCII code .
 * Return:0(success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
