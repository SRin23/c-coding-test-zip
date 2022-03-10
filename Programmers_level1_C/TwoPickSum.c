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
    int* answer;
    int r = 0;
    int sum = 0;

    //메모리 길이 구하기
    int cnt = 0;
    int numLength = numbers_len - 1;
    while (numLength != 0) {
        cnt += numLength;
        numLength -= 1;
    }
    answer = (int*)malloc(sizeof(int) * cnt);

    //계산
    for (int i = 0; i < numbers_len - 1; i++) {
        for (int j = i + 1; j < numbers_len; j++) {
            sum = numbers[i] + numbers[j];
            for (int k = 0; k < sizeof(answer); k++) {
                if (sum == answer[k])
                    break;
                else
                    answer[r++] = sum;
            }
        }
    }
    Sort(answer, r);
    return answer;
}

int main() {
    int numbers[] = { 2, 1, 3, 4, 1 };
    solution(numbers, 5);
    return 0;
}