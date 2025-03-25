#include "main.h"

/**
 * print_char - prints any given character
 * @args: character to print
 *
 * Return: 1
 */
int print_char(va_list *args)
{
	int letter = va_arg(*args, int); /* Get the character from the va_list */

	_putchar(letter); /* Print the character*/

	return (1); /* Return 1 to indicate one character has been printed*/
}
