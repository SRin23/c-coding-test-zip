//로또의 최대순위와 최저순위 구하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    int grade = 7;
    int zero_cnt = 0;

    for (int i = 0; i < lottos_len; i++) {
        if (lottos[i] == 0) {
            zero_cnt++;
        }
    }

    if (zero_cnt == 6) {
        answer[0] = 1;
        answer[1] = 6;
    }
    else {
        for (int i = 0; i < lottos_len; i++) {
            for (int j = 0; j < lottos_len; j++) {
                if (win_nums[i] == lottos[j]) {
                    grade--;
                    break;
                }
            }
        }
        if (grade == 7) {
            answer[0] = 6;
            answer[1] = 6;
        }
        else {
            answer[0] = grade - (zero_cnt);
            answer[1] = grade;
        }

    }
    return answer;
}