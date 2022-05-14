#include "function_pointers"
/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: funtion pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
