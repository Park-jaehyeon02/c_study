#include <stdio.h>

int main(void)
{
	char szName[10] = { 0 };
	int nage;

	printf("나이를 입력하세요 : ");
	scanf("%d", &nage);

	printf("이름을 입력하세요 : ");
	//이전 scanf에서 마지막에 입력한 Enter 이 버퍼에 남아있어 정상적인 작동이 되지 않음
	gets_s(szName);

	printf("이름 : %s\n나이 : %d\n", szName, nage);

	return 0;
}