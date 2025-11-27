# Variadic Functions in C

This project explores **variadic functions** in the C programming language.  
A variadic function is a function that can take a **variable number of arguments**.  
A common example is the standard library function `printf()`.

## 📚 Learning Objectives

By the end of this project, you should be able to:

- Understand what variadic functions are.
- Use the macros from **`stdarg.h`**:
  - `va_list`
  - `va_start`
  - `va_arg`
  - `va_end`
- Write your own functions that accept a varying number of arguments.
- Compile and test C programs that use variadic functions.

## 🧩 Example: Simple Variadic Function

Here is an example of a variadic function that adds numbers:

```c
#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...)
{
    va_list args;
    int total = 0;

    va_start(args, count);

    for (int i = 0; i < count; i++)
        total += va_arg(args, int);

    va_end(args);

    return total;
}

int main(void)
{
    printf("Sum: %d\n", sum(4, 2, 4, 6, 8));
    return 0;
}
