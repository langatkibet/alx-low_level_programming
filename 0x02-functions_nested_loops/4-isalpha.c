#include "main.h"

/**
 *_isalpha(int c)- Find if it's a letter
 *
 *@c: argument
 *Return: 1 Success
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
