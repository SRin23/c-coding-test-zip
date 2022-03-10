//문자열 다루기 기본
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(const char* s) {
    bool answer = true;
    //문자열의 길이가 4혹은 6이었을때
    if (strlen(s) == 4 || strlen(s) == 6) {
        for (int i = 0; i < strlen(s); i++) {
            //숫자가 아니면 answer를 false로 바꾸고 break;
            if (s[i] < '0' || s[i]>'9') {
                answer = false;
                break;
            }
        }
    }
    else {
        //문자열의 길이가 4또는 6이 아니면 false
        answer = false;
    }
    return answer;
}

int main() {
    bool result = solution("a1234");
    if (result == true) {
        printf("조건에 부합합니다.");
    }
    else {
        printf("조건에 부합하지 않습니다.");
    }
}