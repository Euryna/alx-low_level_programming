#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all parametres
* @n: The number of parametres passed to the function
* @...: A variable number to calculate the sum
* Return: If n == 0 - 0.
* Otherwise - sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;

va_start(ap, n);

for (i = 0; i < n; i++)
sum += va_arg(ap, int);

va_end(ap);

return (sum);
}
