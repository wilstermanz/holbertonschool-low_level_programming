#include "main.h"

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 1 == 0 && n % n == 0)
		return (1);
}
