#include <stdio.h>
/**
  * main - prints all single digits
  * Return: 0 (Success)
  */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
