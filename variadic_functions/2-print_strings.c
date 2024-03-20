#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string
 * @n: numbers to arguments
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;
	char *ptr;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		ptr = va_arg(list, char *);
			if (ptr == NULL)
			printf("(nil)");
			else
			printf("%s", ptr);
			if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
