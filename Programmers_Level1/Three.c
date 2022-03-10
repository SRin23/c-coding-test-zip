//3진법 뒤집기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int cpn = n;

    while (cpn != 0) {
        int three = cpn % 3;
        answer *= 3;
        answer += three;
        cpn /= 3;
    }
    return answer;
}