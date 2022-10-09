#include <stdio.h>

int main(void)
{
	unsigned int alpha;
	for (alpha = 97; alpha <= 122; alpha++)
		putchar(alpha);
	for (alpha = 65; alpha <= 90; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
