#include "main.h"

/**
 * _prints_rev_recursion - Function to print string in reverse
 *
 * @s: argument for function
 */

void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
