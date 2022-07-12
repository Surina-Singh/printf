.TH _printf 3 "10 July 2022" "" "_printf man page"
.SH NAME
_printf \Produce output according to a format

.SH SYNOPSIS
.B #include <stdio.h>
.B #include <stdarg.h>

.B "int _printf(const char *format, ...);"

.SH DESCRIPTION
The function produces output according to a format. Format controls the output just like in the printf function from the standard library.

.SH RETURN VALUE
On success, this function returns the number of characters printed(excluding the null byte used to end output to strings).

.SH FORMAT
Each conversion specifier is introduced by the % character and ends with a conversion specifier (c or s or d or i). If %% is passed, % is printed.

.SH SPECIFERS
.TP
c
Print an argument in an unsigned char.
.TP
s
The argument is printed in a string.
.TP
i
Print an int in signed decimal integer
.TP
d
Print an int in signed decimal integer
.TP
u
Print an unsigned int in unsigned decimal integer
.TP
o
Print an unsigned int in unsigned octal integer.
.TP
x,X
Prints an int in unsigned hexadecimal notation. The letters \(dqabcdef\(dq are used for x; the letters \(dqABCDEF\(dq are used for X.
.TP
b
Prints an unsigned int in binary.
.TP
S
Prints a string, but non-printable characters are printed this way: \\x, followed by the ASCII code value in uppercase hexadecimal.
.TP
p
Prints an address, given by pointer variable.
	
.SH EXAMPLE
To print character '21', string "age" and height;
.PP
.nf
.RS
#include "main.h"

int main(void)
{
	_printf("%c %s %d %i", '21', "age", 165, 165;
	return (0);
}
.fi
.PP

.SH AUTHORS
Surina Singh, Rebekah Cupido
