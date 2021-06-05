#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void Sort(int* answer, int r) {
    for (int i = 0; i < r - 1; i++) {
        for (int j = i + 1; j < r; j++) {
            if (answer[i] > answer[j]) {
                int tmp = answer[i];
                answer[i] = answer[j];
                answer[j] = tmp;
            }
        }
    }
}

int* solution(int numbers[], size_t numbers_len) {
    int* answer = (int*)malloc(sizeof(int) * 100);
    memset(answer, 0, sizeof(int) * 100);
    int r = 0;

    for (int i = 0; i < numbers_len; i++) {
        for (int j = i + 1; j < numbers_len; j++) {
            int sum = 0;
            sum = numbers[i] + numbers[j];

            for (int k = 0; k <= r; k++) {
                if (answer[k] != sum) {
                    answer[r++] = sum;
                }
            }
        }
    }
    Sort(answer, r);
    return answer;
}