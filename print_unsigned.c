#include "main.h"

/**
 * print_unsigned - prints any given integer as an unsigned integer
 * @args: integer to print
 *
 * Return: number of digits printed
 */
int print_unsigned(va_list *args)
{
	unsigned long int value, a, len;
	unsigned int count = 1;

	len = 0;
	value = va_arg(*args, unsigned long int);

	a = value; /* Store the absolute value into the variable 'a' for extraction */

	while (a > 9) /* Loop to calculate how many digits abs contains */
	{
		a = a / 10;
		count = count * 10;
	}

	while (count >= 1) /* Extract and print each digit */
	{
		len = len + _putchar(((value / count) % 10) + '0'); /* Print each digit */
			count = count / 10; /* Move into the next digit */
	}
	return (len); /* Return the total number of characters printed */
}
