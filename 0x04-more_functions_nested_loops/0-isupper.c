#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase character.
 *@c: input alphabet
 * Return: 1 if upper and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
