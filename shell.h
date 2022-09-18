#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define PERROR ": No such file or directory\n"

/**
 * struct builtin_fun- structure for buitin functions
 * @name: the function name
 * @fun_ptr: pointer to the function
 */

typedef struct builtin_fun
{
	char *name;
	int (*fun_ptr)(char **env);
} builtin_fun;

/**
 * struct file_node- structure to a linked list node
 * @file_name: node data containing the file name
 * @next: pointer to the next node in the linked list
 */
typedef struct file_node
{
	char *file_name;
	struct file_node *next;
} file_node;

int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, size_t length);
char **mod_strtok(char *buffer, char *delimiter);
char *varname_del(char *dest, char *src, int len);
int _putchar(char c);
int _strlen(char *s);
char *_getenv(char **env, char *var_env);
void _puts(char *str);
file_node *add_node_end(file_node **head, const char *str);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
void free_list(file_node *head);
int find_node(file_node *h, char *str);
int filesys_exec(char **tokens, char **argv, char **env);
char *find_path(char *path_value, char *command);
int _env_fun(char **env);
int _exit_fun(char **env __attribute__((unused)));
int builtin_exec(char **tokens, char **env);
void print_prompt(int fd);
#endif
