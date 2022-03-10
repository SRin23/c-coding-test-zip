#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) {
    char* answer = (char*)malloc(sizeof(char) * strlen(s));
    answer = s;

    for (int i = 0; i < strlen(s) - 1; i++) {
        for (int j = i + 1; j < strlen(s); j++) {
            if (answer[i] < answer[j]) {
                int tmp = answer[i];
                answer[i] = answer[j];
                answer[j] = tmp;
            }
        }
    }
    return answer;
}