//부족한 금액 구하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = 0;

    //놀이기구를 N 번 째 이용한다면 원래 이용료의 N배를 받기로 하였습니다
    //놀이기구는 타는 횟수에 따라 횟수*price만큼씩 소비됩니다.
    for (int i = 1; i <= count; i++) {
        answer += (price * i);
    }
    //만약 돈이 부족하지 않다면 0을 return합니다.
    if (answer <= money) {
        return 0;
    }
    //필요한 돈에서 자신이 가지고 있는 돈을 뺴어 부족한 금액을 구합니다.
    answer = answer - money;
    //부족한 금액을 return합니다.
    return answer;
}

int main() {
    int price = 3;
    int money = 20; 
    int count = 4;

    //solution이 long long 형태이므로 long long형태의 변수로 값을 받습니다.
    long long result = solution(price, money, count);

    //long long타입의 출력형태는 %llu이다.
    printf("놀이기구를 타기 위해 부족한 금액은 %llu원 입니다.", result);
    return 0;
}