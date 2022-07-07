#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 *
 * @c: Number to be checked
 *
 * Return: 1 (Sucess) OR 0 (Failure)
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
