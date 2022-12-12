#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	long b;
	int intType;
	long long c;
	float floatType;
	char charType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(b));
	printf("Size of long long int: %zu byte(s)\n", sizeof(c));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
}


