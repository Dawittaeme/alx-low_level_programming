#include<stdio.h>

/**
  * main - print alphabet in lowercase except e and q
  *
  * Return: zero
  */

int main(void)
{
	char ch1;
	for (ch1 = 'a'; ch1 <= 'z'; ch1++)
	{
		if (ch1 == 'e' || ch1 == 'q')
		{
			continue;
		}
		putchar(ch1);
	}
	putchar('\n');
	return (0);
}
