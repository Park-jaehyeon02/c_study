#include <stdio.h>

int main(void)
{
	char szBufferLeft[32] = { 0 };
	char szBufferRight[32] = { 0 };
	//배열은 주소값을 포함하고 있음으로 입력시 &를 앞에 붙이지 않아도 가능함
	scanf("%s%s", szBufferLeft, szBufferRight);
	printf("%s %s \n", szBufferLeft, szBufferRight);

	return 0;
}