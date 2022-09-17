#include "shell.h"

#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: is a parameter
 * Return: 1 if success and -1 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
