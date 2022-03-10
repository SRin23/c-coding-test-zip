//두 정수 사이의 합
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    //a가 b보다 크다면 두수 바꿈
    if (b < a) {
        int tmp = b;
        b = a;
        a = tmp;
    }

    //a에서 b사이의 값을 더함 
    for (int i = a; i <= b; i++) {
        answer += i;
    }

    return answer;
}

int main() {
    int a = 3;
    int b = 5;
    int result = solution(a, b);

    printf("%d와 %d 사이 숫자들의 합은 %d입니다.\n", a, b, result);

    a = 9;
    b = 2;
    result = solution(a, b);

    printf("%d와 %d 사이 숫자들의 합은 %d입니다.\n", a, b, result);


}