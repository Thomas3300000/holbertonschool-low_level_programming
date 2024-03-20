#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string
 * @n: number of arguments
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && a != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
