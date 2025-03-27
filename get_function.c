#include "main.h"

/**
 * get_function - gets the right function according to a given character
 * @c: character to search for
 *
 * Return: the right function pointer when successful ; NULL otherwise
 */
int (*get_function(char c))(va_list * args)
{
	unsigned int j = 0;

	/* Declaring and initializing a structure of type conv_t */
	conv_t conv[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'u', print_unsigned},
		{'b', print_binary},
		{'o', print_octal},
		{'x', print_hexadecimal_lower},
		{'X', print_hexadecimal_upper},
		{'R', print_rot13},
		{'\0', NULL}
	};

	/* Iterating through each row to find a match between c and id */
	while (conv[j].id)
	{
		if (c == conv[j].id)
			break;
		j++;
	}

	return (conv[j].fptr);
}
