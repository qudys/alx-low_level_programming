#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int b;

	b = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (b > 5)
	printf("Last digit of %d is %d and is greater than %d\n", n, b, 5);
	else if (b == 0)
	printf("Last digit of %d is %d and is %d\n", n, b, 0);
	else if (b < 6)
	printf("Last digit of %d is %d and is less than %d and not %d\n", n, b, 6, 0);
	return (0);
}
