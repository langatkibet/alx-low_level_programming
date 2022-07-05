#include "main.h"

/**
 * times_table- 9*9 math table
 *
 * Return: 0 Success;
 */

void times_table(void)
{
	int i, j, result = 0, fc, sc;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result >= 10 && result < 100)
				{
					fc = result / 10;
					sc = result % 10;
					_putchar('0' + fc);
					_putchar('0' + sc);
				}
				else if (result < 10)
				{
					_putchar(' ');
					_putchar('0' + result);
				}
			}
			else
			{
				_putchar(result + '0');
			}
		}
	_putchar('\n');
	}
}
