#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_int - prints an int
 * @arg: A list of arguments pointing to the int being printed
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
 * print_char - prints a letter
 * @arg: A list of arguments pointing to the letter being printed
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_float - prints a float
 * @arg: A list of arguments pointing to the float being printed
 */
void print_float(va_list arg)
{
	double n;

	n = va_arg(arg, double);
	printf("%f", n);
}

/**
 * print_string - prints a string
 * @arg: A list of arguments pointing to the string being printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
		printf("(nil)");

	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: characters to represent arg types
 */
void print_all(const char * const format, ...)
{
	va_list print;
	unsigned int i = 0, c;
	char *sep = "";
	t_pf func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(print, format);
	while (format && (*(format + i)))
	{
		c = 0;
		while (c < 4 && (*(format + i) != *(func[c].symbol)))
			c++;
		if (c < 4)
		{
			printf("%s", sep);
			func[c].type(print);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(print);
}
