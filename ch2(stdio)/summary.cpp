#include <stdio.h>

int main(void)
{
	printf("%c %d %o %u %x %X %e %E %f %g %p %s");
	printf("\a \b \f \n \r \t \v \\ \? \' \" \ooo \xhh");
	// '�� ?�� ���� �׳� �ᵵ �ν��� �ǵ��� �ٲ�
	printf("' ?");
	return 0;
}