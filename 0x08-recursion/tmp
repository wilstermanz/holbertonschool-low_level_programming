#include "main.h"

/**
 * checker - checks if input is prime
 * @n: number to be checked
 * @i: number to iterate
 * Return: 1 if prime, else 0
 */

int checker(int n, int i)
{
	if (n / 2 == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (checker(n, i + 1));
}

/**
 * is_prime_number - Checks if number is prime
 * @n: Number to be checked
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checker(n, 2));
}
