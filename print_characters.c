#include "main.h"

/**
 * print_c - prints characters
 * @c: character
 *
 * Return: Always 1 (success)
 */
int print_c(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}

/**
 * print_s - prints strings
 * @s: string
 *
 * Return: number of characters printed
 */
int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
