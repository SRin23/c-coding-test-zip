//문자열을 정수로 바꾸기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* s) {
    int answer = 0;

    //s의 첫번째가 -이면 포인터이므로 s+1부터 맨끝까지 int형으로 변환
    if (s[0] == '-') {
        answer = -atoi(s+1);
    }
    //s의 첫번째가 +이면 포인터이므로 s+1부터 맨끝까지 int형으로 변환
    else if (s[0] == '+') {
        answer = atoi(s+1);
    }
    else {
        answer = atoi(s);
    }

    return answer;
}
int main() {
    int result = solution("-1234");
    printf("결과는 %d입니다.\n", result);

    result = solution("12345");
    printf("결과는 %d입니다.\n", result);

    result = solution("+1295");
    printf("결과는 %d입니다.\n", result);
}