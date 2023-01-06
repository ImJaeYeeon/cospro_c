#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price[], int price_len, int money) {
    int answer = 0;

    // 다 더하고
    for (int i = 0; i < price_len; i++)
        answer += price[i];

    // 합산값이 갖은 돈보다 크다면 -1 리턴
    if (answer > money)
        return -1;

    return money - answer;
}