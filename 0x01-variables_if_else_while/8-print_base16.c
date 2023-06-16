#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all numbers base sixteen lowercase'
 * Return: Always 0
*/
int main(void)
{
	int p;
	int q;

	for (p = 48; p <= 57; p++)
	{
		putchar(p);
	}
	for (q = 97; q <= 102; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
