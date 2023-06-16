#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints the alphabet in lowercase'
 * Return: always 0
*/
int main(void)
{
	int z = 97;

	while (z <= 122)
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
