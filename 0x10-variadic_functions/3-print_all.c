#include "variadic_functions.h"

/**
 * integer_print - prints integera
 * @args: parameters
 */
void integer_print(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * char_print - prints characters
 * @args: parameters
 */
void char_print(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * string_print - prints strings
 * @args: parameters
 */
void string_print(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * float_print - prints floats
 * @args: parameters
 */
void float_print(va_list args)
{

	printf("%f", va_arg(args, double));
}
/**
 * print_all - prints anything
 * @format: parameters
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int a, b;
	char *separator;

	args_t arguments[] = {
		{"c", char_print},
		{"i", integer_print},
		{"f", float_print},
		{"s", string_print},
		{NULL, NULL}
	};

	va_start(args, format);
	a = 0;
	separator = "";
	while (format != NULL && *(format + a) != '\0')
	{
		b = 0;
		while (b < 4)
		{
			if (*(format + a) == *(arguments[b]).format)
			{
				printf("%s", separator);
				arguments[b].function(args);
				separator = ", ";
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(args);
}
