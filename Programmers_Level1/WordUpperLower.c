#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    char* answer = (char*)malloc(sizeof(char) * strlen(s) + 5);
    int cnt = 0;
    char* str = s;

    for (int i = 0; i < strlen(s); i++) {
        if (str[cnt] == ' ') {
            cnt = 0; continue;
        }
        if (cnt % 2 == 0) {
            //대문자
            str[i] = str[i] - 32;
            cnt++;
        }
        else {
            //소문자
            cnt++;
        }
    }
    answer = str;
    return answer;
}

int main() {
    const int* s = "try hello world";
    printf("%s", solution(s));
    return 0;
}