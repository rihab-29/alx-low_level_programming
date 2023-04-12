#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>


int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int count_word(char *s);
char **strtow(char *str);

#endif /* MAIN_H */
