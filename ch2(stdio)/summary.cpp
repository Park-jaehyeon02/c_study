#include <stdio.h>

int main(void)
{
	/*
	c : character. ASCII ���
	d : Decimal. ��ȣ�� �ִ� 10����
	o : Octal. 8����
	u : Unsigned int. ��ȣ���� 10����
	x : Hexa. 16����
	e : Exponent. ������ �Ҽ�
	f : Float. 10���� �Ҽ�
	g : ������ �Ҽ�(%e)�� 10���� �Ҽ�(%f) ���
	p : Pointer. 16���� �ּ� ���
	s : String. �μ��� ����Ű�� �޸��� ������ ���ڿ��� ���
	*/

	printf("%c %d %o %u %x %X %e %E %f %g %p %s"); 
	printf("\a \b \f \n \r \t \v \\ \? \' \" \ooo \xhh");
	// '�� ?�� ���� �׳� �ᵵ �ν��� �ǵ��� �ٲ�
	printf("' ?");
	return 0;
}