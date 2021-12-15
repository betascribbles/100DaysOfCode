/**
* filename: rev_recursion.c
* desc: prints the given strig in reverse by recursion 
*/


#include <stdio.h>

void _puts_recursion(char *s)
{
        int i = 0;

	if (*s)
		_puts_recursion(s + 1);
		printf("%c", *s);
}

int main(void)
{
    _puts_recursion("I am learning about recursion in C programming.\n");
    return (0);
}
