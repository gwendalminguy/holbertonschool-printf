#include "main.h"

/**
 * print_string - prints a string
 * @args: string to print
 *
 * Return: number of characters printed
 */
int print_string(va_list *args)
{

	int i;
	char *string;

	/* Getting the string argument */
	string = (va_arg(*args, char *));

	/* Checking if the string is NULL */
	if (string == 0)
		string = "(null)";

	/* Looping through each character of the string */
	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (i);
}
