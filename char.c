#include "main.h"
/**
 * print_character - check the code
 * @types: check parameter
 * Return: returns 1
 */
int print_character(va_list types)
{
	char str;

	str = va_arg(types, int);
	_putchar(str);
	return (1);
}
