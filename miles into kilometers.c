#include <stdio.h>

int main()
{
	float miles;

	printf(" enter miles:");
	scanf("%f", &miles);

	float kilometers = miles * 1.6;

	printf("%f Kilometers", kilometers);
}
