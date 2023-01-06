#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* Add(int x, int y) {
	int sum;
	sum = x + y;
	return &sum;
}
int main() {
	int x = 5, y = 7;
	int* pz;
	pz = Add(x, y);
	printf("%d\n", *pz);
	printf("%d\n", *pz);
	return 0;
}
