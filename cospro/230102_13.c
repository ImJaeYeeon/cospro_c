#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
	char name[20] = { 0 };
	printf("%d \n", sizeof(name));//�̸��� name�� ������ ũ��
	printf("%d \n", sizeof(*(name))); //�ּҰ� name�� ������ ũ��
	printf("%d \n", sizeof(*(&name))); //�ּҰ� &name�� ������ ũ��

	char name2[3][20] = { 0 };
	printf("%d \n", sizeof(name2));
	printf("%d \n", sizeof(*(name2)));
	printf("%d \n", sizeof(*(&name2)));
}