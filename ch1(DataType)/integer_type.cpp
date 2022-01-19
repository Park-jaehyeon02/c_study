#include<stdio.h>

int main(void)
{
	char ch = 'A';	//1byte
	wchar_t wch = L'A';	//16bit for using unicode
	short sData = 1234;	 //16bit signed
	int nData = 10;	//4byte
	long lData = 10L;	//
	long int lnData = 10L;	//
	long long int llnData = 10LL;	//

	unsigned char uch = 0;
	unsigned short usData = 65536U; //unsigned int -> unsigned short
	unsigned int unData = 1U;
	unsigned long int ulnData = 1UL;
	unsigned long long int ullnData = 1ULL;

	return 0;
}