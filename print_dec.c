#include "main.h"
/**
 * print_dec - prints decimals
 * @d: decimal
 *
 * Return: number of characters and integers printed
 */
int print_dec(va_list d)
{
	int a[10];
	int b, c, e, sum, count;

	e = va_arg(d, int);
	count = 0;
	c = 1000000000;
	a[0] = e / c;
	for (b = 1; b < 10; b++)
	{
		c /= 10;
		a[b] = (e / c) % 10;
	}
	if (e < 0)
	{
		_putchar('-');
		count++;
		for (b = 0; b < 10; b++)
			a[b] *= -1;
	}
	for (b = 0, sum = 0; b < 10; b++)
	{
		sum += a[b];
		if (sum != 0 || b == 9)
		{
			_putchar('0' + a[b]);
			count++;
		}
	}
	return (count);
}
