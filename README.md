# 0x11.C - printf

### Low-Level Programming

**Authors:** *Surina Singh and Rebekah Cupido*

## Description

The _printf() function produces output according to a format that is described below. This function will write it\
s output to the stdout, the standard output. The function returns the count of the printed characters when succes\
sfully executed.

The conversion specifiers are:

+ %c - Print single character.
+ %s - Print a string.
+ %d - Print decimals.
+ %i - Print integers.
+ %b - Print unsigned interger to binary.
+ %u - Print unsigned integers.
+ %0 - Print unsigned octal integers.
+ %x - Print unsigned hexadecimal integers in lowercase.
+ %X - Print unsigned hexadecimal integers in UPPERCASE.
+ %S - Print string
+ %p - Print an address
---

## Resources

- [secrets of printf](https://www.cypress.com/file/54761/download)
- [Implementing printf and scanf in C](https://iq.opengenus.org/how-printf-and-scanf-function-works-in-c-internally/)
- [All About Printf](https://akshatshibu.wordpress.com/2015/07/22/all-about-printf/)

## General Requirements
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file


## Authorized functions and macros
- `write` (`man 2 write`)
- `malloc` (`man 3 malloc`)
- `free` (`man 3 free`)
- `va_start` (`man 3 va_start`)
- `va_end` (`man 3 va_end`)
- `va_copy` (`man 3 va_copy`)
- `va_arg` (`man 3 va_arg`)

---

## Prototype
```int _printf(const char *format, ...);```

## Compilation
*Your code will be compiled this way:
```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c```

## Examples

* ```_printf("Rebekah Cupido, Surina Singh\n")``` *prints "Rebekah Cupido, Surina Singh", followed by a new line*
* ```_printf("%d\n, 10062022")``` *prints "10062022"*

---

# Tasks 

## Mandatory Tasks
### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
### 1. Education is when you read the fine print. Experience is what you get if you don't


## Advanced Tasks
### 2. With a face like mine, I do better in print
### 3. What one has not experienced, one will never understand in print
### 4. Nothing in fine print is ever good news
### 5. My weakness is wearing too much leopard print
### 6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print