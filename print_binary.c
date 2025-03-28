#include "main.h"

/**
 * print_binary - prints any given integer in binary
 * @args: integer to print
 *
 * Return: number of digits printed
 */
int print_binary(va_list *args)
{
	long int n = va_arg(*args, long int);
	int len = 0, power = 0, digit = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n < 0)
		n = -n;

	/* Getting number of digits of n in binary */
	while (raise(2, len) <= n)
		len++;

	power = len;

	/* Printing the digit for each power of 2 (from highest to 0) */
	while (power > 0)
	{
		if (n >= raise(2, power - 1))
		{
			digit = n / raise(2, power - 1);
			n = n % raise(2, power - 1);
			_putchar('0' + digit);
		}
		else
			_putchar('0');

		power--;
	}

	return (len);
}

/**
 * raise - computes an integer raised to the power of an integer
 * @n: integer to raise
 * @p: power
 *
 * Return: result
 */
long int raise(long int n, int p)
{
	long int result = 1;

	while (p > 0)
	{
		result *= n;
		p--;
	}

	return (result);
}
