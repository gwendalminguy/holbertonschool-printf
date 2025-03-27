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
	char *string;

	/* Getting the string argument from the va_list */
	string = (va_arg(*args, char *));

	/* Checking if the string is NULL */
	if (string == 0)
		string = "(null)";

	/* Looping through each character of the string */
	for (i = 0; string[i] != '\0'; i++)
	{
		/* Shifting by adding 13 if in first half of alphabet */
		if ((string[i] > 64 && string[i] < 78) || (string[i] > 96 && string[i] < 110))
			_putchar(string[i] + 13);
		/* Shifting by removing 13 if in second half of alphabet */
		else if ((string[i] > 77 && string[i] < 91) || (string[i] > 109 && string[i] < 123))
			_putchar(string[i] - 13);
		/* Printing as is if not an alphabet character */
		else
			_putchar(string[i]);
	}

	return (i);
}
