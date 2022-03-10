#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* cards[][2], int cards_len) {
	int answer = 0;
	int red = 0;
	int black = 0;
	int blue = 0;

	for (int i = 0; i < cards_len; i++) {
		answer += atoi(cards[i][1]);
		if (cards[i][0] == "red")
			red++;
		else if (cards[i][0] == "blue")
			blue++;
		else
			black++;
	}

	if (red == 3 || blue == 3 || black == 3) {
		answer *= 3;
	}
	else if (red == 2 || blue == 2 || black == 2) {
		answer *= 2;
	}

	return answer;
}

int main() {
	char* cards1[][2] = { {"blue", "2"}, {"red", "5"}, {"black", "3"} };
	int cards_len1 = 3;
	int ret1 = solution(cards1, cards_len1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	char* cards2[][2] = { {"blue", "2"}, {"blue", "5"}, {"black", "3"} };
	int cards_len2 = 3;
	int ret2 = solution(cards2, cards_len2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}