#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Enty point
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;
	srand(time)(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		prinf("%d is positive\n", n);
	else if (n = 0)
		prinf("%d is zero\n", n);
	else
	       prinf("%d is negative\n", n);
	retun (0);
}
