#include "main.h"

int _divisible(int x, int y);
int is_prime_number(int n);

/**
  * _divisible - Check if number is divisible
  * @x: number to be checked
  * @y: divisor
  * Return: 0 if divisible, 1 if not
*/
int _divisible(int x, int y)
{
	if (x % y == 0)
	{
		return (0);
	}
	if (y == x / 2)
	{
		return (1);
	}
	return (_divisible(x, y + 1));
}

/**
  * is_prime_number - Check if a prime number
  * @n: number to be checked
  * Return: 1 if prime, 0 if not prime
*/

int is_prime_number(int n)
{
	int y = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (_divisible(n, y));
}
