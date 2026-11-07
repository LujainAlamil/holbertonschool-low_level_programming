#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int row;
	int col;
	int result;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			result = row * col;

			if (result < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}

			_putchar((result % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			col++;
		}
		_putchar('\n');
		row++;
	}
}
