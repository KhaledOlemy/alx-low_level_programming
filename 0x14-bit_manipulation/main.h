#ifndef _MAIN_H_
#define _MAIN_H_
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
unsigned int binary_to_uint(const char *b);
int _pow(int x, int y);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int _pow_recursion(unsigned long int x, unsigned long int y);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int count_binary(unsigned long int n, int c);
int get_endianness(void);
#endif
