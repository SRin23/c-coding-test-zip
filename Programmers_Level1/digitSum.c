//자릿수 더하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int cpn = n;    //원본 n을 변경하지 않기 위해 copy n생성
    while (cpn > 0) {   //cpn이 0보다 클 동안 반복문 실행
        answer += cpn % 10; //cpn을 10으로 나눈 나머지 -> 각 자릿수를 answer에 누적으로 더함
        cpn /= 10;  //cpn을 10으로 나눠 다음 자릿수 준비
    }

    return answer;
}

int main() {
    int n = 123456789;
    int answer = soution(n);
    printf("%d", answer);
    return 0;
}