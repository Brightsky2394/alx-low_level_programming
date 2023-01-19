#ifndef FUCTIONS_H
#define FUNCTIONS_H
#include <stdarg.h>
/**
 * struct Ftype - Struct op
 * @tc: Parameter
 * @tf: The function associated
 */
typedef struct Ftype
{
char *tc;
void (*tf)(va_list);
} ftype;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
