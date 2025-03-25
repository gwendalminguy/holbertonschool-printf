#include "main.h"

/**
 * print_binary - prints any given unsigned integer in binary
 * @args: integer to print
 *
 * Return: number of digits printed
 */
int print_binary(va_list *args)
{
	long int n = va_arg(*args, long int);
	long int value = 0;
	int len = 0, power = 0;

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

	power = len - 1;
	value = n;

	/* Printing each digit */
	while (power >= 0)
	{
		if (value >= raise(2, power))
		{
			_putchar('1');
			value = value % raise(2, power);
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
