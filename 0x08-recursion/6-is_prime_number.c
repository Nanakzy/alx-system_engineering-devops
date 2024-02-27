#include "main.h"

/**
 * actual_prime - check if number is prime recursion
 * @n: number to check
 * @z: iterator number
 * Return: 1 if prime otherwise 0
 */
int actual_prime(int n, int z)
{
	if (z == 1)
		return (1);

	if (n % z == 0 || z <= 0)
		return (0);

	return (actual_prime(n, z - 1));
}
/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: number to check
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (actual_prime(n, n - 1));
}
