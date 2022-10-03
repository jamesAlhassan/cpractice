#include <stdio.h>

/**
 * isInteger - checks whether the string is an integer or not
 * @s: string to check
 * Return: 0 if is integer and 1 if not integer
 */
void isInteger(char *s)
{
	int i, sum;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
			sum += s[i];
		else
		{
			break;
			printf("Error");
}


/**
 * main - adds poistive numbers
 * @argc: argumnets count
 * @argv: argument vector
 * Return: 0 if no arg, Error if arg is not number
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d", 0);
	}
	else
	{
		isinteger(argv)
	}
	return (0);
}
