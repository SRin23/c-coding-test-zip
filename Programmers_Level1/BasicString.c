#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
bool solution(const char* s) {
    bool answer = true;
    int cnt = 0;

    if (strlen(s) != 6 && strlen(s) != 4) {
        return false;
    }

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            cnt++;
        }
    }

    if (cnt != strlen(s)) {
        return false;
    }

    return answer;
}