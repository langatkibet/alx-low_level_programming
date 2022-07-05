#include "main.h"

/**
 * _islower(int c)- Check for lowercase alphabet
 *
 * Return: 1 Success
 *@c: argument
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
