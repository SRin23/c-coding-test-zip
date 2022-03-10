#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int money, int price, int n) {
    int answer = 0;

    int empty_bottle = answer = money / price;	//살수있는 병의 개수
    while (n <= empty_bottle) {	//내가가진빈병의 수가 교환하는데 필요한 빈병의 수보다 많으면
        empty_bottle = empty_bottle - n;	//빈병은 
        answer++;	//음료수 개수는 +1
        empty_bottle++;	//위에서 교환한 음료수를 마신후 빈병
    }

    return answer;
}

int main() {
	int money1 = 8;
	int price1 = 2;
	int n1 = 4;
	int ret1 = solution(money1, price1, n1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int money2 = 6;
	int price2 = 2;
	int n2 = 2;
	int ret2 = solution(money2, price2, n2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}