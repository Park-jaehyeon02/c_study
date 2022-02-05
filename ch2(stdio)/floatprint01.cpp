#include <stdio.h>

int main(void)
{
	printf("%d\n", sizeof(123.45F));
	printf("%d\n", sizeof(123.45));
	
	printf("%f\n", 123.45F); //float

	printf("%f\n", 123.45); //double
	printf("%lf\n", 123.45); //long double

	return 0;
}