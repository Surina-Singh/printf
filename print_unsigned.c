#include "main.h"
/**
 * print_unsigned - prints an unsigned integer
 * @u: unsigned integer to convert
 *
 * Return: number of digits
 */
int print_unsigned(va_list u)
{
	unsigned int a[10];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(u, unsigned int);
	m = 1000000000; /* (10 ^ 9) */
	a[0] = n / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}
	for (i = 0, sum = 0, count = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}