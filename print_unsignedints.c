#include "main.h"
/**
 * print_b - Convert an unsigned into binary notation
 * @b: unsigned integer to convert
 *
 * Return: number of digits
 */
int print_b(va_list b)
{
	unsigned int n, m;
	unsigned int i = 0;
	unsigned int sum = 0;
	unsigned int a[32];
	int count = 0;

	n = va_arg(b, unsigned int);
	m = 2147483648;
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}

	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
