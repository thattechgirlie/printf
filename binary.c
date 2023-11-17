#include "main.h"
/**
 * print_binary - check the code
 * @types: check parameter
 * Return: returns value
 */
int print_binary(va_list types)
{
int a = 0;
int c = 0;
int p = 1;
int b, m;
unsigned int j = va_arg(types, unsigned int);
unsigned int l;

for (m = 0; m < 32; m++)
{
	l = ((p << (32 - m)) & j);
	if (p >> (31 - m))
	{
		a = 1;
	}
	if (a)
	{
		b = l >> (31 - m);
		_putchar(b + 48);
		c++;
	}
}
if (c == 0)
{
	c++;
	_putchar('0');
}
return (c);
}
