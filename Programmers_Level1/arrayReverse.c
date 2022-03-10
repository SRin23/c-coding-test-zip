//자연수 뒤집어 배열로 만들기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int cnt = 0;
int* solution(long long n) {
   

    long long cpn = n;
    while (cpn > 0) {
        cpn /= 10;
        cnt++;
    }

    int* answer = (int*)malloc(sizeof(int) * cnt);
    for (int i = 0; i < cnt; i++) {
        answer[i] = n % 10;
        n /= 10;
    }

    return answer;
}

int main() {
    long long n = 123456;
    int* result = solution(n);
    for (int i = 0; i < cnt; i++) {
        printf("%d, ", result[i]);
    }
    return 0;
}