#include "main.h"

/**
 * _isdigit - Checks for numbers
 *
 * @c: character to checked
 *
 * Return: 1 OR 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
