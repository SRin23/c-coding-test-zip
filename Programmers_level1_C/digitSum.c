//�ڸ��� ���ϱ�
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int cpn = n;    //���� n�� �������� �ʱ� ���� copy n����
    while (cpn > 0) {   //cpn�� 0���� Ŭ ���� �ݺ��� ����
        answer += cpn % 10; //cpn�� 10���� ���� ������ -> �� �ڸ����� answer�� �������� ����
        cpn /= 10;  //cpn�� 10���� ���� ���� �ڸ��� �غ�
    }

    return answer;
}

int main() {
    int n = 123456789;
    int answer = soution(n);
    printf("%d", answer);
    return 0;
}