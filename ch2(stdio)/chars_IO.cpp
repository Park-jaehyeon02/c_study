#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };
	printf("�̸��� �Է��ϼ��� : ");

	//gets(szName);
	//������ gets �Լ����� ������ gets�Լ��� ã���� ����.
	//2011�� C ǥ�� �����ȿ��� ǥ�� ���̺귯������ �����Ǿ��� �����̴�.
	//gets�� �����÷ο� ��������� ���� gets_s�Լ��� ����ؾߵ�.
	gets_s(szName);
	//gets_s(szName,sizeof(szName));
	//���� ������ ũ�⸦ ���� ���� �ټ��� �ִ�.
	printf("����� �̸��� ");
	puts(szName);
	puts("�Դϴ�.");
	
	//need to add
	printf("%c %d %o %u %x %X %e %E %f %g %p %s");
	printf("\a \b \f \n \r \t \v \\ \? \' \" \ooo \xhh");
	// '�� ?�� ���� �׳� �ᵵ �ν��� �ǵ��� �ٲ�
	printf("' ?");
	return 0;
}