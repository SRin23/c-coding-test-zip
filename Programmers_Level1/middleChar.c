#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(sizeof(char) * 2);
    int len_s = strlen(s);
    char str[] = s;

    if (len_s % 2 == 0) {
        answer[0] = str[(len_s / 2)];
        answer[1] = str[(len_s / 2) + 1];
    }
    else {
        answer = str[(len_s / 2) + 1];
    }
    return answer;
}