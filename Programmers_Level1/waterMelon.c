#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    char* answer = (char*)malloc(3 * n);
    memset(answer, NULL, sizeof(answer));

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            strcat(answer, "��");
        }
        else {
            strcat(answer, "��");
        }
    }
    return answer;
}