#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	unsigned int index, sum = 0;

	va_start(numb, n);

	for (index = 0; index < n; index++)
		sum += va_arg(numb, int);

	va_end(numb);

	return (sum);
}
