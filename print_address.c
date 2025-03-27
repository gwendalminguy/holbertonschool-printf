#include "main.h"

/**
 * print_address - prints the address of any given variable
 * @args: variable to print the address of
 *
 * Return: number of characters printed
 */
int print_address(va_list *args)
{
	int *ptr;
	int len = 0;

	/* Assigning the variable ptr to the address of the argument */
	ptr = va_arg(*args, void *);

	if (ptr == NULL)
	{
		_printf("%s", "(nil)");
		return (5);
	}

	/* Getting number of digits of ptr in hexadecimal */ 
	while (raise(16, len) <= (long int)ptr)
		len++;

	_putchar('0');
	_putchar('x');
	len += 2;

	/* Printing ptr as an hexadecimal value */
	_printf("%x", ptr);

	return (len);
}
