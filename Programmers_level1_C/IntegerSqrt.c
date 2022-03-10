#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//math.h헤더파일 추가(pow, sqrt사용)
#include <math.h>

long long solution(long long n) {
    long long answer = 0;

    //n의 제곱근이 정수인지 판별
    if (sqrt(n) == (int)sqrt(n)) {
        //sqrt(n)+1을 제곱
        answer = pow(sqrt(n) + 1, 2);
    }
    else {
        //아니면 -1반환
        answer = -1;
    }
    return answer;
}
//참고 : https://jun01.tistory.com/56

int main() {
    long long result = solution(121);
    printf("121의 제곱근+1의 제곱 : %lld\n", result);

    result = solution(3);
    printf("3의 제곱근+1의 제곱 : %lld\n", result);

}