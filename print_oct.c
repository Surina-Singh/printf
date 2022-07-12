#include "main.h"
/**
 * print_oct - Convert an unsigned into binary notation
 * @o: unsigned integer to convert
 *
 * Return: number of digits
 */
int print_oct(va_list o)
{
		unsigned int a[11];
		unsigned int i, m, n, sum;
		int count;

		n = va_arg(o, unsigned int);
		m = 1073741824;
		a[0] = n / m;
			for (i = 1; i < 11; i++)
		{
				m /= 8;
				a[i] = (n / m) % 8;
		}
			for (i = 0, sum = 0, count = 0; i < 11; i++)
		{
				sum += a[i];
					if (sum || i == 10)
				{
						_putchar('0' + a[i]);
						count++;
				}
		}
		return (count);
}
