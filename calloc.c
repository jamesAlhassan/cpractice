#include <stdio.h>
#include <stdlib.h>

/**
 * main - dynamically allocating memory using malloc
 *
 * Return: Void
 */

int main(void)
{
	int n, i, *ptr;

	printf("Enter the number of values: ");
	scanf("%d", &n);
	ptr = (int *) calloc(n, sizeof(int));
	printf("\nEnter the values: ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", ptr + i);
	}
	printf("\nThe values entered are:");
	for (i = 0; i < n; i++)
	{
		printf("\n %d\t\n", *(ptr + i));
	}

	free(ptr);
	return (0);
}
