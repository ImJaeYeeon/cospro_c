#include<stdio.h>
void main() {
	char* pChar;
	int* pInt;
	double* pDouble;
	printf("%d\n", sizeof(pChar)); //변수가 찾이하는만큼 포인터는 4바이트
	printf("%d\n", sizeof(pInt));
	printf("%d\n", sizeof(pDouble));

	printf("%d\n", sizeof(*pChar)); //일반 변수가 찾이하는 만큼 char는 1바이트
	printf("%d\n", sizeof(*pInt)); //int는 4바이트
	printf("%d\n", sizeof(*pDouble)); //double은 8바이트
}