/**
* file name: swap_int.c
* output file: swap_int
* Desc: takes the values of two integers from the user and
*	swaps them
*/


#include <stdio.h>

/**
* swap_int - swaps the values of two integers
* @a: first integer
* @b: second integer
* @temp: temporary exchange place holder
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

/*
* main - start of the program
* @e: first integer
* @f: second integer
* @*g: pointer to @e
* @*h: pointer to @f
*/
int main()
{
	int e, f, *g, *h;

	g = &e;
	h = &f;

	printf("Enter values for 2 integers\n");
	scanf("%i %i", g, h);

	printf("\n Before\ne = %d\nf = %d", e, f);

	swap_int(g, h);
	printf("\n\n After\ne = %d\nf = %d\n", e, f);

	return (0);
}
