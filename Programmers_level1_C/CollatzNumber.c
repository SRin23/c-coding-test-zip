//콜라츠 추측
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;

    //num계산중 int형의 최대를 넘어갈 수 있으므로 long형 사용(num 복사)
    long cnum = num;

    //cnum이 1이 될때까지 반복
    while (cnum != 1) {
        //반복 실행시 answer+1
        answer++;

        //cnum이 짝수면 2로 나눔
        if (cnum % 2 == 0) {
            cnum /= 2;
        }

        //cnum이 홀수면 3을 곱하고 1을 더함
        else {
            cnum = (cnum * 3) + 1;
        }

        //만약, 500회 넘게 반복해도 답이 나오지 않으면 -1을 반환
        if (answer == 500) {
            answer = -1;
            break;
        }
    }

    return answer;
}

int main() {
    int result = solution(6);
    printf("%d의 값 : %d\n", 6, result);

    result = solution(16);
    printf("%d의 값 : %d\n", 16, result);

    result = solution(626331);
    printf("%d의 값 : %d\n", 626331, result);

}