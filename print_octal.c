#include "main.h"

/**
 * print_octal - prints any given integer in octal
 * @args: integer to print
 *
 * Return: number of digits printed
 */
int print_octal(va_list *args)
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

	/* Getting number of digits of n in octal */
	while (raise(8, len) <= n)
		len++;

	power = len;

	/* Printing the digit for each power of 8 (from highest to 0) */
	while (power > 0)
	{
		if (n >= raise(8, power - 1))
		{
			digit = n / raise(8, power - 1);
			n = n % raise(8, power - 1);
			_putchar('0' + digit);
		}
		else
			_putchar('0');

		power--;
	}

	return (len);
}
