#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) {
		int current = i;
		while (current != 0) { 		//??ĭ
			if ((current / 3) == 0)
				count++;
			current /= 10;
		}
	}
	return count;
}
int main() {
	int number = 40;
	int ret = solution(number);

	printf("solution ?Լ??? ??ȯ ???? %d ?Դϴ?.\n", ret);
}