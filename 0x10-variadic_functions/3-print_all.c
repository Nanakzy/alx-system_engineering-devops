#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#define _putchar putchar

/**
 * print_all - prints anything
 * @format: types of arguments passed
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *st, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;

					case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;

					case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;

					case 's':

					st = va_arg(list, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", sep, st);
					break;
					default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
