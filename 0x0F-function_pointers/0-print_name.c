#ainclude "function_pointers.h"
/**
 *print_name - function that prints name
 *@name: parameter name
 *@f: call back function
 *Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
