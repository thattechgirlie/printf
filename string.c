#include "main.h"
#include <stdio.h>
/**
 * printf_string- check the code
 * @types: check parameter
 * Return: returns value
 */
int printf_string(va_list types)
{
int a, b;
char *str;
str = va_arg(types, char *);

if (str == NULL)
{
	str = "(null)";
	b = _strlen(str);
	for (a = 0; a < b; a++)
	{
		_putchar(str[a]);
	}
}
else
{
	b = _strlen(str);
	for (a = 0; a < b; a++)
	{
		_putchar(str[a]);
	}	
}
return (b);
}
