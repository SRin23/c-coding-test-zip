//약수들의 합
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    //1부터 자기자신 중 약수 구하기
    for (int i = 1; i <= n; i++) {
        //i로 n을 나눈 나머지가 0이면 answer에 더함
        if (n % i == 0) {
            answer += i;
        }
    }
    return answer;
}

int main() {
    int result = solution(23);
    printf("%d 약수들의 합은 %d입니다.", 23, result);
    return 0;
}