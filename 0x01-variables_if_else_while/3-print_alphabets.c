#include <stdio.h>

/**
  * main - prints the alphabet both lower and upper cases
  * Return: 0
  */
int main(void)
{
	char l;
	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	char u;
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');

	return (0);
}
