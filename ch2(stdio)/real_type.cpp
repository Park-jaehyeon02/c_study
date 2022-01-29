#include<stdio.h>
//load for DBL_MIN & DBL_MAX
#include<float.h>


int main(void)
{
	double dData = 123.456; // - 2.225074 * 10^308 ~ 1.797693 * 10^308
	printf("%f \n", dData);
	printf("%E - %E\n", DBL_MIN, DBL_MAX);
	return 0;
}