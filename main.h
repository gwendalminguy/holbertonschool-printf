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
	void (*fptr)(va_list); 
};

typedef struct conv conv_t;

/* All our functions*/
void print_string(va_list);
void print_char(va_list);

#endif
