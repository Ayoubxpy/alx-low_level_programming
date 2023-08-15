#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c:the character in ASCII code.
 * Return:0 for letters 1 for the rest
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
