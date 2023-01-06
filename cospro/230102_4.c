#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    char word[6][20] = { "한국", "미국", "일본", "영국","독일","호주" };
    char key[20] = { 0 };
    int cnt = 0;
    strcpy(key, "독일");
    printf("찾을 단어 : %s\n", key);
    for (int i = 0; i < 6; i++) {
        if (strcmp(word[i], key) == 0) {
            pritnf("%d번째에 있음\n", i + 1);
            cnt++;
        }
    }
    if (cnt == 0) pritnf("찾을 수 없음\n");
}