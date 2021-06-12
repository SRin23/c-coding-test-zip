//핸드폰 번호 가리기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* phone_number) {
    int length = strlen(phone_number);
    char* answer = (char*)malloc(sizeof(char) * length);
    answer = phone_number;
    for (int i = 0; i < length - 4; i++) {
        answer[i] = '*';
    }

    return answer;
}