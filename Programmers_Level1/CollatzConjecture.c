//콜라츠 추측
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    long long copy_num = num;

    while (copy_num != 1) {
        if (copy_num % 2 == 0) {
            copy_num /= 2;
            answer++;
        }
        else {
            copy_num = (copy_num * 3) + 1;
            answer++;
        }

        if (answer >= 500) {
            answer = -1;
            break;
        }
    }

    return answer;
}