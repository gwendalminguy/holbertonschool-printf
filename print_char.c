#include "main.h"

/**
 * print_char - prints any given character
 * @args: character to print
 */
void print_char(va_list *args)
{
	char letter = va_arg(args, int);

	_putchar(letter);
}
