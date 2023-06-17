#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * Entry point of the program.
 * Initializes the application and starts the execution.
 */

int main(void) {	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0) {
		printf("%i is positive\n", n);
	}
	else if (n == 0) {
		printf("%i is zero\n", n);
	}
	else if (n < 0) {
		printf("%d is negative\n", n);
	}

	return (0);
}
