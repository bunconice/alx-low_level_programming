#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/*
 * File: 0-positive_or_negative.c
 * Author: Bunmi
 * Description: This program generates a random number and prints
 * whether it is positive, negative, or zero.
 */
/**
 * main -  assign a random number to the variable 'n' 
 * and determines if it is positive, negative, or zero
 * Return: It returns 0 to indicate successful execution.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
