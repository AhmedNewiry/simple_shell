#include "shell.h"
/**
 * print_prompt - prints prompt if we are in the interactive mode.
 * @fd: a file descriptor.
 */
void print_prompt(int fd)
{
	struct stat s_stat;

	fstat(fd, &s_stat);

	if (S_ISCHR(s_stat.st_mode))
	{
		_puts("$ ");
	}
}
