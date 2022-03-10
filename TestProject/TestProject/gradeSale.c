#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price, char* grade) {
	int answer = 0;
	if (grade == "V") {
		answer = price - (price * 0.15);
	}
	else if (grade == "G") {
		answer = price - (price * 0.1);
	}
	else if (grade == "S") {
		answer = price - (price * 0.05);
	}
	return answer;
}

int main() {
	int price1 = 2500;
	char* grade1 = "V";
	int ret1 = solution(price1, grade1);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

	int price2 = 96900;
	char* grade2 = "S";
	int ret2 = solution(price2, grade2);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}