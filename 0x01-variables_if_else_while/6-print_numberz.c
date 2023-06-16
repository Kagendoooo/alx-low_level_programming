#include <stdio.h>
/**
 *main - Entry point
 *description - single digit numbers of base 10
 *Return: (0) always
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + 48);
	}
	putchar('\n');
	return (0);
}
