#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s) {
    int answer = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[0] == '-') {
            answer = -atoi(s + 1);
        }
        else {
            answer = atoi(s);
        }
    }


    return answer;
}