#include <stdio.h>

int main(void)
{
	char szName[10] = { 0 };
	int nage;

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &nage);

	printf("�̸��� �Է��ϼ��� : ");
	//���� scanf���� �������� �Է��� Enter �� ���ۿ� �����־� �������� �۵��� ���� ����
	gets_s(szName);

	printf("�̸� : %s\n���� : %d\n", szName, nage);

	return 0;
}