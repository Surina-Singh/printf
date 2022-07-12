#include "main.h"
/**
 * print_int - prints integers
 * @i: integer
 *
 * Return: number of characters and integers printed
 */
int print_int(va_list i)
{
	int a[10];
	int z, x, y, sum, count;

	x = va_arg(i, int);
	count = 0;
	y = 1000000000;
	a[0] = x / y;
	for (z = 1; z < 10; z++)
	{
		y /= 10;
		a[z] = (x / z) % 10;
	}
	if (y < 0)
	{
		_putchar('-');
		count++;

		for (z = 0; z < 10; z++)
			a[z] *= -1;
	}

	for (z = 0, sum = 0; z < 10; z++)
	{
		sum += a[z];
		if (sum != 0 || z == 9)
		{
			_putchar('0' + a[z]);
			count++;
		}
	}
	return (count);
}
