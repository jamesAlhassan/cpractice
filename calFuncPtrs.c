#include <stdio.h>

/**
 * main - calculator using function pointers
 *
 * Return: 0 if success
 */

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int mod(int, int);

int main(void)
{
	int num1, num2, operator;

	int (*ptAll[])(int, int) = {add, sub, mul, div, mod};

	printf("Please enter two numbers \n");
	scanf("%d%d", num1, num2);
}

int add(int x, int y)
{
	return (x + y);
}

int sub(int x, int y)
{
	return (x - y);
}

int mul(int x, int y)
{
	return (x * y);
}

int div(int x, int y)
{
	return (x / x);
}

int mod(int x, int y)
{
	return (x % y);
}
