#include "main.h"
#include <stdio.h>

/**
 * _printf - prints any formatted string
 *
 * Description: ...
 *
 * @format: formatted string to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0;
	int total = 0;
	va_list args;

	/* Declaring and initializing a structure of type conv_t */
	conv_t conv[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'\0', NULL}
	};
	va_start(args, format);

	/* Going through each character of format */
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			total++;
		}
		else if (format[i + 1] == '\0')
		{
			total--;
			break;
		}
		else
		{
			j = 0;
			while (conv[j].id != '\0' && format[i + 1] != conv[j].id)
				j++;
			if (conv[j].id != '\0')
				total += conv[j].fptr(&args);
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				total++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i + 1]);
				total += 2;
			}
			i++;
		}
		i++;
	}
	va_end(args);
	return (total);
}
