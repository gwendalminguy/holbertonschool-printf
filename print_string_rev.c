#include "main.h"

/**
 * print_string_rev - prints a string in reverse
 * @args: string to print
 *
 * Return: number of characters printed
 */
int print_string_rev(va_list *args)
{

	int i = 0;
	int len;
	char *string;

	/* Getting the string argument */
	string = (va_arg(*args, char *));

	/* Checking if the string is NULL */
	if (string == 0)
	{
		string = "(null)";
		while (string[i] != '\0')
		{
			_putchar(string[i]);
			i++;
		}
	}

	/* Computing the length of the string */
	while (string[i] != '\0')
		i++;

	len = i;
	i--;

	/* Printing each character starting from the end */
	while (i >= 0)
	{
		_putchar(string[i]);
		i--;
	}

	return (len);
}
