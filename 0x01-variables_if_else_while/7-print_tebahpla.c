#include <stdio.h>

/**
  * main - prints the alphabet in reverse order
  * Return: 0
  */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}

	putchar('\n');

	return (0);
}
