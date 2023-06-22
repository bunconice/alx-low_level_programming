#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers,
  * starting with 1 and 2
  *
  * Return: 0
  */
int main(void)
{
    long long int a = 1;
    long long int b = 2;
    int c;
    long long int next = a + b;

    printf("%d, %d, ", a, b);

    for (c = 3; c <= 50; c++)
    {
	printf("%d, ", next);
    a = b;
    b = next;
    next = a + b;
    }
    return (0);
}
