
#include <stdio.h>

/**
 * main - Prints hexadecimal numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}

	for (num = 10; num <= 15; num++)
	{
		putchar(num - 10 + 'a');
	}

	putchar('\n');
	return (0);
}

