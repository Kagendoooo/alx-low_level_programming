#include "main.h"
#include <stdio.h>
/**
  * main - Entry point
  * Description: Print numbers 0 to 100
  * But for multiples of three print Fizz
  * for the multiples of five print Buzz
  * For numbers which are multiples of both three and five print FizzBuzz
  * Return: Always 0
*/

int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if ((j % 3 == 0) && (j % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", j);
		}
		if (j != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
