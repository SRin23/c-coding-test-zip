//������� ��
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    //1���� �ڱ��ڽ� �� ��� ���ϱ�
    for (int i = 1; i <= n; i++) {
        //i�� n�� ���� �������� 0�̸� answer�� ����
        if (n % i == 0) {
            answer += i;
        }
    }
    return answer;
}

int main() {
    int result = solution(23);
    printf("%d ������� ���� %d�Դϴ�.", 23, result);
    return 0;
}