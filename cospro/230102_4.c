#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    char word[6][20] = { "�ѱ�", "�̱�", "�Ϻ�", "����","����","ȣ��" };
    char key[20] = { 0 };
    int cnt = 0;
    strcpy(key, "����");
    printf("ã�� �ܾ� : %s\n", key);
    for (int i = 0; i < 6; i++) {
        if (strcmp(word[i], key) == 0) {
            pritnf("%d��°�� ����\n", i + 1);
            cnt++;
        }
    }
    if (cnt == 0) pritnf("ã�� �� ����\n");
}