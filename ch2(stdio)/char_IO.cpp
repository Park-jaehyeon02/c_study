#include <stdio.h>
#include <conio.h> //for _getch&_getche

int main(void)
{
	char ch = 0;
	//get one char. if occur error,return EOF(-1) 
	ch = getchar();

	//print one char. if occur error,return EOF(-1) 
	putchar(ch);
	putchar('Z');

	//_getch,_getche�Լ��� "�ƹ� Ű�� ������ ����� �Է��� �߻�����"�� �����Ϸ��� ������ �� ����
	// getchar�� ���� �ٸ� ���� Non-buffered I/O �� ���۸� ��ġ�� �ʰ� ��� ������ ����
	printf("\n�ƹ� Ű�� ������ �������� �Ѿ�ϴ�. \n");
	ch = _getch(); //
	printf("�Է��� Ű�� ");
	putchar(ch);
	printf("�Դϴ�. \n");


	printf("\n�ƹ� Ű�� ������ �������� �Ѿ�ϴ�. \n");
	ch = _getche(); //_getche�� _getch�� �ٸ��� �Է¹��� ���� ����ϰ� ��ȯ�� 
	printf("�Է��� Ű�� ");
	putchar(ch);
	printf("�Դϴ�. \n");
	return 0;

	//���� ��� getchar�� �޸� _getch�Լ��� Enter�� ���� �ʿ䰡 ����
	//�� ���ڶ� �ԷµǸ� ��� ��ȯ�ϱ� ����
}