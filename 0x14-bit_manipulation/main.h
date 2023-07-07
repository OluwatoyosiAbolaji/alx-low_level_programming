#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
int get_endianness(void);
int _putchar(char c);
int power(int a, int b);
int raise(int a, int b);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int binary_to_uint(const char *b);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
#endif /* MAIN_H */
