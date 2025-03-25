#include "main.h"
/**
 * print_string - Function that prints a string to the standard output.
 * @args: A va_list who contains the arguments passed to the standard output.
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int print_string(va_list *args)
{

	int i;
	char *string;

	/* Get the string argument from the va_list */
	string = (va_arg(*args, char *));

	/* Check if the string is NULL, set it to "(null)" */
	if (string == 0)
		string = "(null)";

	/* Loop through each character of the string and print it */
	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (i);/*The number of characters printed*/
}
