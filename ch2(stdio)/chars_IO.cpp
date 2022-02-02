#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };
	printf("이름을 입력하세요 : ");

	//gets(szName);
	//예제는 gets 함수지만 실제로 gets함수는 찾을수 없다.
	//2011년 C 표준 개정안에서 표준 라이브러리에서 삭제되었기 때문이다.
	//gets의 오버플로우 취약점으로 인해 gets_s함수를 사용해야됨.
	gets_s(szName);
	//gets_s(szName,sizeof(szName));
	//직접 버퍼의 크기를 위와 같이 줄수도 있다.
	printf("당신의 이름은 ");
	puts(szName);
	puts("입니다.");
	
	//need to add
	printf("%c %d %o %u %x %X %e %E %f %g %p %s");
	printf("\a \b \f \n \r \t \v \\ \? \' \" \ooo \xhh");
	// '와 ?는 이제 그냥 써도 인식이 되도록 바뀜
	printf("' ?");
	return 0;
}