#include "main.h"

/**
 * print_char - prints any given character
 * @args: character to print
 *
 * Return: 1
 */
int print_char(va_list *args)
{
	char letter = va_arg(*args, int);

	if (letter == '\0')
		return (0);

	_putchar(letter);

	return (1);
}
