#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int func_b(char* p[], int n) {
	return 0;
}
int main() {
	char titles[5][20] = { "first","second","third","fourth","fifth" };
	func_a(titles, 5);
	char* par[5] = { titles[0],titles[1],titles[2],titles[3],titles[4] };
	func_b(par, 5);
	return 0;
}