#include <stdio.h>

/**
 * main -entry point
 *
 *Return: 0 Success
 *
 */

int main(void)
{
	char jesu;
	char saitan;

	for (jesu = 'a'; jesu <= 'z'; jesu++)
	{
		putchar(jesu);
	}
	for (saitan = 'A'; saitan <= 'Z'; saitan++)
	{
		putchar(saitan);
	}
	putchar('\n');
	return (0);
}
