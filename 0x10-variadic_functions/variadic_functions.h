#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
