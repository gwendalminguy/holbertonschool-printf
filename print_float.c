#include "main.h"






int print_float(va_list args)
{

	int value;
	unsigned int abs, a , len;
	unsigned int count = 1;

	len = 0;
	value = va_args(args , int);

	if (value < 0)
	{
		len = len + _putchar('-');
		abs = value * -1;
	}
	else 
		abs = value;
	
	a = abs;
	while (a > 9)
	{


