#include<stdio.h>
//load for DBL_MIN & DBL_MAX
#include<float.h>


int main(void)
{
	double dData = 123.456; // -2.225074 * 10^308 ~ 1.797693 * 10^308
	printf("%f \n", dData);
	printf("%E - %E\n", DBL_MIN, DBL_MAX);
	
	float fData = 123.456; // -1.175494 * 10^38 ~ 3.402823 * 10^38
	printf("%f \n", fData);
	printf("%E - %E\n", FLT_MIN, FLT_MAX);

	printf("%%f : %f \n", fData); //�Ϲ� ǥ��
	printf("%%g : %g \n", fData); //�Ҽ��� �ڸ��� 0 ���� ������� ����
	printf("%%e : %e \n", fData); //���� ǥ��
	return 0;
}