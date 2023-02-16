#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long int d;
	float e;


	printf("Size of char: %lu bytes(s)\n", (unsigned long) sizeof(a));
	printf("Size of int: %lu bytes(s)\n", (unsigned long) sizeof(b));
	printf("Size of long int: %lu bytes(s)\n", (unsigned long) sizeof(c));
	printf("Size of long long int: %lu bytes(s)\n", (unsigned long) sizeof(d));
	printf("Size of float: %lu bytes(s)\n", (unsigned long) sizeof(e));
	return (0);
}
