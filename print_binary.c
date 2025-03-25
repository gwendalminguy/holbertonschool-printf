#include "main.h"

/**
 * print_binary - prints any given unsigned integer in binary
 * @args: integer to print
 *
 * Return: number of digits printed
 */
int print_binary(va_list *args)
{
	int n = va_arg(*args, int);
	int len = 0, power = 0, value = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	/* Getting number of digits of n in binary */
	while (raise(2, len) < n)
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
int raise(int n, int p)
{
	int result = 1;

	while (p > 0)
	{
		result *= n;
		p--;
	}

	return (result);
}
