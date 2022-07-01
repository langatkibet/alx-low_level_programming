#include <stdio.h>

/**
 * main- entry point
 *
 *Return: 0 Success
 */

int main(void)
{
	int y;
	char z;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
	}
	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
