#include<stdio.h>
void main() {
	char* pChar;
	int* pInt;
	double* pDouble;
	printf("%d\n", sizeof(pChar)); //������ ã���ϴ¸�ŭ �����ʹ� 4����Ʈ
	printf("%d\n", sizeof(pInt));
	printf("%d\n", sizeof(pDouble));

	printf("%d\n", sizeof(*pChar)); //�Ϲ� ������ ã���ϴ� ��ŭ char�� 1����Ʈ
	printf("%d\n", sizeof(*pInt)); //int�� 4����Ʈ
	printf("%d\n", sizeof(*pDouble)); //double�� 8����Ʈ
}