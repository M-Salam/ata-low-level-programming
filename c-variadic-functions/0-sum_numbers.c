#include <stdarg.h>

/**
 * sum_all - return the sum of an arbitrary number of integers
 * @count: number of integer arguments that follow
 *
 * Return: the integer sum of the provided arguments.
 */
int sum_all(int count, ...)
{
    int sum = 0;
    int i;

    if (count <= 0)
        return 0;

    va_list args;
    va_start(args, count);

    for (i = 0; i < count; i++)
    {
        int value = va_arg(args, int);
        sum += value;
    }

    va_end(args);
    return sum;
}
