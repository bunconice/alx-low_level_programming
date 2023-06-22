/**
  * main - prints the first 50 Fibonacci numbers,
  * starting with 1 and 2
  *
  * Return: 0
  */
int main(void)
{
		long int a = 1;
		long int b = 2;
		int c = 3;
		long int next = a + b;

		printf("%ld, %ld, ", a, b);

		while (c <= 50)
		{
		if (c == 50)
		printf("%ld \n", next);
		else
		printf("%ld, ", next);
		a = b;
		b = next;
		next = a + b;
		c++;
		}
		return (0);
}
