#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };
	int nAge = 0;

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &nAge);

	
	printf("이름을 입력하세요 : ");
	
	while (getchar() != '\n');
	
	//fflush(stdin);
	
	/*
	버퍼안의 스트림을 날려준다
	Update : VS2015부터는 fflush(stdin)이 작동하지 않는다.
	fflush 함수의 용도는 출력 버퍼를 지우는 용도이다.
	따라서 표준 입력인 stdin을 fflush파라미터로 사용하는 것은 표준을 위반한다.
	POSIX라는 합의에서는 입력버퍼에서도 확장하지만 VS2015이후는 표준을 지키기 위해 입력버퍼에 대한 사용을 막아놓았다.
	그러니 그냥 위 코드처럼 반복문을 이용하여 버퍼를 비워주도록 하자
	*/

	gets_s(szName);

	printf("%d %s\n", nAge, szName);

	return 0;
}