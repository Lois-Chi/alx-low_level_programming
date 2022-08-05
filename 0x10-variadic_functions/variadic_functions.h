#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * struct args_t - struct param
 * @format: format param
 * @function: printed functions
 */
typedef struct args_t
{
	char *format;
	void (*function)();
} args_t;
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
