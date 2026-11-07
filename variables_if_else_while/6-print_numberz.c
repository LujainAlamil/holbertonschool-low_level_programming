
#include <stdio.h>

/**
 * main - Prints single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	putchar('\n');
	return (0);
}

