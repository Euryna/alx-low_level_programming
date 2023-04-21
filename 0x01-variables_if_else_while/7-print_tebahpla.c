#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse followed by new line
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}

