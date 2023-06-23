#include <stdio.h>
#include <math.h>
/**
  * main - Entry point
  * Description:prints the largest prime factor of the number 612852475143
  * Return: Always 0
*/

int main(void)
{
	long a, max;
	long b = 612852475143;
	double c = sqrt(b);

	for (a = 1; a <= c; a++)
	{
		if (b % a == 0)
		{
			max = b / a;
		}
	}
	printf("%ld\n", max);
	return (0);
}
