#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 * @...: arguments to be printed
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, num;
	char c;
	float f;
	char *s;
	va_list ap;

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == 'c')
		{
			c = (char)va_arg(ap, int);
			printf("%c, ", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(ap, int);
			printf("%d, ", num);
		}
		else if (format[i] == 'f')
		{
			f = (float)va_arg(ap, double);
			printf("%f, ", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
