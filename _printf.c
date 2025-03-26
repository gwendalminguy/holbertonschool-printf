#include "main.h"

/**
 * _printf - prints any formatted string
 *
 * Description: prints any string with format specifiers:
 *		%c prints a character
 *		%s prints a string
 *		%i / %d prints an integer
 *		%b prints an integer in binary format
 *
 * @format: formatted string to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	int total = 0;
	va_list args;

	/* Going through each character of format */
	va_start(args, format);
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
			/* Searching for a conversion specifier */
			if (get_function(format[i + 1]) != NULL)
				total += get_function(format[i + 1])(&args);
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
