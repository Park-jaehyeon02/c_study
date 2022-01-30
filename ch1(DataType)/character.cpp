#include <stdio.h>

int main(void)
{
	char ch1 = 'A', ch2 = 'B', ch3 = 'C';
	char szData[4] = { 'A','B','C' };
	char szNData[4] = { "ABC" };
	printf("%s\n%s", szData, szNData);
	return 0;
}