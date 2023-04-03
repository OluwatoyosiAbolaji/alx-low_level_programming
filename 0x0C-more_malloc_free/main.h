#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void printchars(int *a, int length);

int _putchar(char c);

void add(int *ptr, int length);

void printchars2(char *ptr, int length);

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int lenarray(char *ptr);

#endif /* MAIN_H */
