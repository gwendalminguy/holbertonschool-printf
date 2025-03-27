#include "main.h"

/**
 * print_ascii - prints a string without special characters
 * @args: string to print
 *
 * Return: number of characters printed
 */
int print_ascii(va_list *args)
{

	int i;
	int len = 0;
	char *string;

	/* Getting the string argument */
	string = (va_arg(*args, char *));

	/* Checking if the string is NULL */
	if (string == 0)
		string = "(null)";

	/* Looping through each character of the string */
	for (i = 0; string[i] != '\0'; i++)
	{
		/* Printing it if normal character */
		if (string[i] > 31 && string[i] < 127)
		{
			_putchar(string[i]);
			len++;
		}

		/* Printing its ASCII value if special character */
		else
		{
			_putchar('\\');
			_putchar('x');
			if (string[i] < 16)
				_putchar('0');
			_printf("%X", string[i]);
			len += 4;
		}
	}

	return (len);
}
