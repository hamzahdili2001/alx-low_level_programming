#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
char _putchar(char c);
int get_endianness(void);
/**
 * union u - a union of 4 byte integer
 * @i: the 4 byte int
 * @arr: the array of 4 byte
 */
union u
{
	int i;
	char arr[4];
};
#endif
