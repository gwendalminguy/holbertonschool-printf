#ifndef PRINT_F
#define PRINT_F

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct conv : Define a structure of functions and arguments identifier
 * @id : identifier for a type
 * @*fptr : A function pointer to a function
 */
struct conv
{
	char id; 
	int (*fptr)(va_list *args); 
};

typedef struct conv conv_t;

/* All our functions*/
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list *args);
int print_char(va_list *args);
int print_int(va_list *args);

#endif
