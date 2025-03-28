#include "main.h"

/**
 * print_rot13 - prints a string with ROT13 encryption
 * @args: string to print
 *
 * Return: number of characters printed
 */
int print_rot13(va_list *args)
{
	int i;
	char *str;

	/* Getting the string argument from the va_list */
	str = (va_arg(*args, char *));

	/* Checking if the string is NULL */
	if (str == 0)
		str = "(null)";

	/* Looping through each character of the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Shifting by adding 13 if in first half of alphabet */
		if ((str[i] > 64 && str[i] < 78) || (str[i] > 96 && str[i] < 110))
			_putchar(str[i] + 13);
		/* Shifting by removing 13 if in second half of alphabet */
		else if ((str[i] > 77 && str[i] < 91) || (str[i] > 109 && str[i] < 123))
			_putchar(str[i] - 13);
		/* Printing as is if not an alphabet character */
		else
			_putchar(str[i]);
	}

	return (i);
}
