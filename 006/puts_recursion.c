/**
* filename: puts_recursion.c
* Desc: Prints the given string using recursion
*/

#include <stdio.h>

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;

	else
		putchar(s[i]);
		_puts_recursion(s + 1);
}

int main(void)
{
    _puts_recursion("I am learning about recursion in C programming.\n");
    return (0);
}
