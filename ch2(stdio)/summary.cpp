#include <stdio.h>

int main(void)
{
	printf("%c %d %o %u %x %X %e %E %f %g %p %s");
	printf("\a \b \f \n \r \t \v \\ \? \' \" \ooo \xhh");
	// '와 ?는 이제 그냥 써도 인식이 되도록 바뀜
	printf("' ?");
	return 0;
}