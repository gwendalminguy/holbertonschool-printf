#include "main.h"

/**
 * print_int - prints any given integer in decimal
 * @args: integer to print
 *
 * Return: number of digits printed
 */
int print_int(va_list *args)
{
	int value;
	unsigned int abs, a, len;
	unsigned int count = 1;

	len = 0;
	value = va_arg(*args, int);

	if (value < 0) /* Manage negative numbers */
	{
		len = len + _putchar('-');
		abs = value * -1;
	}
	else
		abs = value;

	a = abs; /* Store the absolute value into the variable 'a' for extraction */

	while (a > 9) /* Loop to calculate how many digits abs contains */
	{
		a = a / 10;
		count = count * 10;
	}

	while (count >= 1) /* Extract and print each digit */
	{
		len = len + _putchar(((abs / count) % 10) + '0'); /* Print each digit */
			count = count / 10; /* Move into the next digit */
	}
	return (len); /* Return the total number of characters printed */
}
