#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Prints sum of fibonacci even valued terms'
  *Return: Always 0
*/
int main(void)
{
	long long int x = 1;
	long long int y = 2;
	long long int z = 0;

	while (y <= 4000000)
	{
		if (y % 2 == 0)
		{
			z += y;
		}

		long long int next = x + y;

		x = y;
		y = next;
	}

	printf("%lld\n", z);
	return (0);
}
