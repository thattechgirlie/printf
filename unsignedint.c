#include "main.h"
/**
 * print_unsignedint - check the code
 * @types: check parameter
 * Return: returns value
 */
int print_unsignedint(va_list types)
{
int a = va_arg(types, int);
int b, z = a % 10, c, d = 1, f = 1;
a = a / 10;
b = a;

if (z < 0)
{
	_putchar('-');
	b = -b;
	a = -a;
	z = -z;
	f++;
}
if (b > 0)
{
	while (b / 10 != 0)
	{
		d = d * 10;
		b = b / 10;
	}
	b = a;

	while (d > 0)
	{
		c = b / d;
		_putchar(c + '0');
		b = b - (c * d);
		d = d / 10;
		f++;
	}
}
_putchar(z + '0');
return (f);
}
