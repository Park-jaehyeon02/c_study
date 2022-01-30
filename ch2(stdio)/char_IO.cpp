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

	//_getch,_getche함수는 "아무 키나 눌러서 사용자 입력이 발생했음"을 감지하려는 목적이 더 강함
	// getchar과 가장 다른 점은 Non-buffered I/O 즉 버퍼를 거치지 않고 즉시 정보가 전달
	printf("\n아무 키나 누르면 다음으로 넘어갑니다. \n");
	ch = _getch(); //
	printf("입력한 키는 ");
	putchar(ch);
	printf("입니다. \n");


	printf("\n아무 키나 누르면 다음으로 넘어갑니다. \n");
	ch = _getche(); //_getche는 _getch와 다르게 입력받은 값을 출력하고 반환함 
	printf("입력한 키는 ");
	putchar(ch);
	printf("입니다. \n");
	return 0;

	//실행 결과 getchar과 달리 _getch함수는 Enter를 누를 필요가 없음
	//한 글자라도 입력되면 즉시 반환하기 때문
}