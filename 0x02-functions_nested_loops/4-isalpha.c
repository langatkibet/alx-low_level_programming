#include "main.h"

/**
 *_isalpha(int c)- Find if it's a letter
 *
 *@c: argument
 *Return: 1 Success
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		if (c > 96 && c < 123)
		{
			return (1);
		}
	return (0);
	}
}
