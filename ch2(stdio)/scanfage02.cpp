#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };
	int nAge = 0;

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &nAge);

	
	printf("�̸��� �Է��ϼ��� : ");
	
	while (getchar() != '\n');
	
	//fflush(stdin);
	
	/*
	���۾��� ��Ʈ���� �����ش�
	Update : VS2015���ʹ� fflush(stdin)�� �۵����� �ʴ´�.
	fflush �Լ��� �뵵�� ��� ���۸� ����� �뵵�̴�.
	���� ǥ�� �Է��� stdin�� fflush�Ķ���ͷ� ����ϴ� ���� ǥ���� �����Ѵ�.
	POSIX��� ���ǿ����� �Է¹��ۿ����� Ȯ�������� VS2015���Ĵ� ǥ���� ��Ű�� ���� �Է¹��ۿ� ���� ����� ���Ƴ��Ҵ�.
	�׷��� �׳� �� �ڵ�ó�� �ݺ����� �̿��Ͽ� ���۸� ����ֵ��� ����
	*/

	gets_s(szName);

	printf("%d %s\n", nAge, szName);

	return 0;
}