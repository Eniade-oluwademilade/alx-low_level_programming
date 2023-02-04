#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void prINT_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bit(unsigned int long n, unsigned int long m);
int get_endianness(void);

#endif
