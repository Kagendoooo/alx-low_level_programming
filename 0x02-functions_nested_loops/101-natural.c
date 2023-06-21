#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Sums all natural numbers multiples of 3 and 5'
  *Return: Always 0
*/
int main(void)
{
	int x;
	int sum;

	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		sum = sum + x;
	}
	printf("%d\n", sum);
	return (0);
}
