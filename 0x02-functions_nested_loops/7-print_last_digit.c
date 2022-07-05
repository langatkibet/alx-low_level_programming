#include "main.h"

/**
 * print_last_digit -print last digit
 * @n: argument
 * Return: 0 Success
 */

int print_last_digit(int n)
{
	int y = n % 10;


	if (y < 0)
		y *= -1;
	_putchar('0' + y);
	return (y);
}
