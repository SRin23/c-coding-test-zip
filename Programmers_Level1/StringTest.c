//���ڿ� �ٷ�� �⺻
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(const char* s) {
    bool answer = true;
    //���ڿ��� ���̰� 4Ȥ�� 6�̾�����
    if (strlen(s) == 4 || strlen(s) == 6) {
        for (int i = 0; i < strlen(s); i++) {
            //���ڰ� �ƴϸ� answer�� false�� �ٲٰ� break;
            if (s[i] < '0' || s[i]>'9') {
                answer = false;
                break;
            }
        }
    }
    else {
        //���ڿ��� ���̰� 4�Ǵ� 6�� �ƴϸ� false
        answer = false;
    }
    return answer;
}

int main() {
    bool result = solution("a1234");
    if (result == true) {
        printf("���ǿ� �����մϴ�.");
    }
    else {
        printf("���ǿ� �������� �ʽ��ϴ�.");
    }
}