#include "shell.h"
/**
 * _puts- a function that prints a string
 * @str: the input pointer of a string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

}
