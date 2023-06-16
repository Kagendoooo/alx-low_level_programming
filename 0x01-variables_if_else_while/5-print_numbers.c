#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all single digit numbers'
 * Return: Always 0
*/
int main(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
