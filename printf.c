#include "main.h"

/**
 * _printf - ...
 *
 * Description: ...
 *
 * @format: ...
 *
 * Return: ...
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list *args;

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
		if (format[i] != '%' && format[i - 1] != '%')
			_putchar(format[i]);

		else if (format[i] == '%' && format[i - 1] == '%')
			_putchar('%');

		else
		{
			j = 0;

			while (format[i] != '\0' && format[i] != conv.id[j])
				j++;

			if (conv.id[j] != '\0')
				conv[j].fptr(&args);

			else
				...
		}

		i++;
	}

	va_end(args);

	return (i);
}
