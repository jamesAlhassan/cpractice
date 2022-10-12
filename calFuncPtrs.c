#include <stdio.h>

/** main - calculator using function pointers
 *
 * Return: 0 if success
 */

int add(x, y);
int sub(x, y);
int mul(x, y);
int div(x, y);

int main(void)
{
	int (*ptAll[])(int, int) = {add, sub, mul, div};

}

int add(int x, int y)
{
	return (x + y);
}

int sub(int x, int y)
{
	return (x - y);
}


