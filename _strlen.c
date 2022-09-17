#include "shell.h"
/**
 * _strlen- a function to calculate the length of a string
 * @s: is the input string
 * Return: n the lenght of the stribg
 */


int _strlen(char *s)
{
	int n = 0;

	while (*s)
	{
		n++;
		s++;
	}
	return (n);
}
