#include "holberton.h"
/**
 *is_prime_number - find a prime number
 *@n: number
 *Return: return the function its_prime
 */
int is_prime_number(int n)
{
	int i = 2;

	return (its_prime(n, i));
}
/**
 *its_prime - find if a number is prime
 *@n: number
 *@i: iterator
 *Return: return if 1 n is prime or 0 if not
 */
int its_prime(int n, int i)
{
	int ressult;

	if (n <= 1)
	{
		i = 0;
		return (i);
	}
	else if (n % i == 0 && n == i)
	{
		i = 1;
		return (i);
	}
	else if (n % i == 0)
	{
		i = 0;
		return (i);
	}
	i++;
	ressult = its_prime(n, i);
	return (ressult);
}
