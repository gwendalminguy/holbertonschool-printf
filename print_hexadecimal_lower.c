#include "main.h"

/**
 * print_hexadecimal_lower - prints any given integer in hexadecimal
 * @args: integer to print
 *
 * Return: number of digits printed
 */
int print_hexadecimal_lower(va_list *args)
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

	/* Getting number of digits of n in hexadecimal */
	while (raise(16, len) <= n)
		len++;

	power = len;

	/* Printing the digit for each power of 16 (from highest to 0) */
	while (power > 0)
	{
		if (n >= raise(16, power - 1))
		{
			digit = n / raise(16, power - 1);
			n = n % raise(16, power - 1);

			if (digit > 9)
				_putchar(87 + digit);
			else
				_putchar('0' + digit);
		}
		else
			_putchar('0');

		power--;
	}

	return (len);
}
