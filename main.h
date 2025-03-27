#ifndef PRINT_F
#define PRINT_F

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct conv - structure of type identifiers and function pointers
 * @id: identifier for a type
 * @fptr: matching function pointer
 */
struct conv
{
	char id;
	int (*fptr)(va_list *args);
};

typedef struct conv conv_t;

/* All functions prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int (*get_function(char c))(va_list *args);
int print_char(va_list *args);
int print_string(va_list *args);
int print_int(va_list *args);
int print_unsigned(va_list *args);
int print_binary(va_list *args);
long int raise(long int n, int p);
int print_octal(va_list *args);
int print_hexadecimal_lower(va_list *args);
int print_hexadecimal_upper(va_list *args);

#endif
