#include <stdio.h>
#include <stdlib.h>

int main() {
	int* pArr[5] = { 10, 20, 30, 40, 50 }; // 포인터변수 5개를 저장하는 1차 배열
	pArr[0] = &pArr[0];
	pArr[1] = &pArr[1];
	pArr[2] = &pArr[2];
	pArr[3] = &pArr[3];
	pArr[4] = &pArr[4];

	char* pStr[4] = { "red","green","blue","gray" };
	printf("[0]번 문자열 상수 : %s\n", pStr[0]);
	printf("[1]번 문자열 상수 : %s\n", pStr[1]);
	printf("[2]번 문자열 상수 : %s\n", pStr[2]);
	printf("[3]번 문자열 상수 : %s\n", pStr[3]);

	return 0;
}