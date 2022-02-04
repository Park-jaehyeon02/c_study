#include <stdio.h>

int main(void)
{
	/*
	c : character. ASCII 출력
	d : Decimal. 부호가 있는 10진수
	o : Octal. 8진수
	u : Unsigned int. 부호없는 10진수
	x : Hexa. 16진수
	e : Exponent. 지수형 소수
	f : Float. 10진형 소수
	g : 지수형 소수(%e)나 10진형 소수(%f) 출력
	p : Pointer. 16진수 주소 출력
	s : String. 인수가 가리키는 메모리의 내용을 문자열로 출력
	*/

	printf("%c %d %o %u %x %X %e %E %f %g %p %s"); 
	printf("\a \b \f \n \r \t \v \\ \? \' \" \ooo \xhh");
	// '와 ?는 이제 그냥 써도 인식이 되도록 바뀜
	printf("' ?");
	return 0;
}