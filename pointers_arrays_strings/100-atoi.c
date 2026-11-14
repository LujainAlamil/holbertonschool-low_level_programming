#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;
	int digit;
	int limit;

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	limit = (sign == -1) ? INT_MIN : -INT_MAX;

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (result < limit / 10 ||
		    (result == limit / 10 && digit > -(limit % 10)))
		{
			return (sign == -1 ? INT_MIN : INT_MAX);
		}

		result = result * 10 - digit;
		i++;
	}

	return (sign == -1 ? result : -result);
}
