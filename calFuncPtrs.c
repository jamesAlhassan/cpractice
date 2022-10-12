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
	int num1, num2, operator, result;

	int (*ptAll[])(int, int) = {add, sub, mul, div, mod};

	printf("Please enter two numbers \n");
	scanf("%d%d", &num1, &num2);

	printf("Please enter operator:\n 0 for addition\n 1 for substraction\n 2 for multiplication\n 3 for division\n and 4 for modulo\n ");
	scanf("%d", &operator);

	if (operator < 0)
		printf("Sorry, Operator: %d out of range\n", operator);

	else if (operator > 4)
		printf("Sorry, Operator: %d out of range\n", operator);

	else
	{
		result = (*ptAll[operator])(num1, num2);
	}

	printf("The result of %d and %d is: %d\n", num1, num2, result);

	return (0);
};

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
