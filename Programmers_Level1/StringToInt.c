//���ڿ��� ������ �ٲٱ�
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* s) {
    int answer = 0;

    //s�� ù��°�� -�̸� �������̹Ƿ� s+1���� �ǳ����� int������ ��ȯ
    if (s[0] == '-') {
        answer = -atoi(s+1);
    }
    //s�� ù��°�� +�̸� �������̹Ƿ� s+1���� �ǳ����� int������ ��ȯ
    else if (s[0] == '+') {
        answer = atoi(s+1);
    }
    else {
        answer = atoi(s);
    }

    return answer;
}
int main() {
    int result = solution("-1234");
    printf("����� %d�Դϴ�.\n", result);

    result = solution("12345");
    printf("����� %d�Դϴ�.\n", result);

    result = solution("+1295");
    printf("����� %d�Դϴ�.\n", result);
}