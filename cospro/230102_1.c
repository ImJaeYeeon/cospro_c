#include<stdio.h>
void main() {
	int arr[3][4] = { 0 };
	printf("arr�� ũ��:%d \n", sizeof(arr)); //48
	printf("arr[0]�� ũ��:%d \n", sizeof(arr[0])); //16
	printf("arr[1]�� ũ��:%d \n", sizeof(arr[1])); //16
	printf("ar[2]r�� ũ��:%d \n", sizeof(arr[2])); //16
	printf("arr[2][3]�� ũ��:%d \n", sizeof(arr[2][3])); //4

	char ch = '9';
	int number = ch - 48;//ch-'0'
	printf("%3d", number);
	printf("%3d0", ch);
}