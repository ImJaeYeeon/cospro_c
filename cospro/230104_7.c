#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price[], int price_len, int money) {
    int answer = 0;

    // �� ���ϰ�
    for (int i = 0; i < price_len; i++)
        answer += price[i];

    // �ջ갪�� ���� ������ ũ�ٸ� -1 ����
    if (answer > money)
        return -1;

    return money - answer;
}