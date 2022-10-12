#include <stdio.h>

int main(void)
{
	unsigned int alpha;
	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (alpha == 101 || alpha == 113)
			continue;
		else
			putchar('\n');
	}

	putchar('\n');

	return (0);
}
