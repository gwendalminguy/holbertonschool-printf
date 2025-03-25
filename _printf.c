#include "main.h"
#include <stdio.h>

/**
 * _printf - ...
 *
 * Description: ...
 *
 * @format: ...
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
			else
			{
				_putchar('%');
				total++;
				if (format[i + 1] != '%')
				{
					_putchar(format[i + 1]);
					total++;
				}
			}
			i++;
		}
		i++;
	}
	va_end(args);
	return (total);
}
