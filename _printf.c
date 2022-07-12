#include "main.h"
/**
 * specs_checks - Validates format specifier checker.
 * @format: Format specifier.
 * Return: If valid function - return pointer.
 *         Otherwise NULL.
 */
static int (*specs_checks(const char *format))(va_list)
{
	unsigned int i;
	printf_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{"b", print_bin},
		{"u", print_unsigned},
		{"o", print_oct},
		{"x", print_x},
		{"X", print_X},
		{"S", print_S},
		{"p", print_p},
		{'\0', NULL}
	};
	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}
/**
 * _printf - Prints format.
 * @format: Argument types passed to the function.
 * Return: Prints number of characters.
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	unsigned int count;

	va_list pf;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(pf, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = specs_checks(&format[i + 1]);
		if (f != NULL)
		{
			count += f(pf);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(pf);
	return (count);
}
