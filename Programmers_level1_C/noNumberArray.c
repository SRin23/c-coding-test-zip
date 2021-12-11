//없는 숫자 더하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    //arr을 0으로 초기화 시켜야 한다.
    //arr은 크기가 10인 배열로 0~9까지의 인덱스를 가진다.
    int arr[10] = { 0, };

    for (int i = 0; i < numbers_len; i++) {
        //numbers의 값 찍어보기
        //printf("%d\n", numbers[i]);
        
        //numbers의 값을 arr의 인덱스로 사용하여 그 인덱스를 호출할때마다 값 1씩 증가 
        arr[numbers[i]]++;
    }
    for (int i = 0; i < 10; i++) {
        //만약, 한번도 불리지 않았다면 한번도 값이 더해지지 않은것과 같으므로 초기값인 0을 가진다.
        //만약, 값이 0이면 배열안에 없다는 것으로 알고, answer에 값을 누적시킨다.
        if (arr[i] == 0) {
            //printf("%d\n", i);
            answer += i;
        }
    }
    return answer;
}

int main() {
    int numbers[] = { 1,2,3,4,6,7,8,0 };
    int size = sizeof(numbers) / sizeof(int);
    int result = solution(numbers, size);
    printf("결과 : %d\n", result);
    return 0;
}