#include <stdio.h>

unsigned int main(unsigned int bin)
{
	unsigned int rem;
	unsigned int dec = 0;
	int weight = 1;
	bin = 10010;

	if (bin == 0)
		return 0;

	while (bin != 0)
	{
		rem = bin % 10;
		dec = dec + (rem * weight);
		bin = bin / 10;
		weight = weight * 2;
	}
	return(dec);
}
