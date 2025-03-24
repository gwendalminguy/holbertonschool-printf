#include "main.h"


int print_string(va_list *args)
{

	int i;
	char *string;

	string = (va_arg(*args, char *));
	if (string == 0)
		string = "(null)";
	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
	return (i);
}
