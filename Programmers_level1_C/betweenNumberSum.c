//�� ���� ������ ��
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    //a�� b���� ũ�ٸ� �μ� �ٲ�
    if (b < a) {
        int tmp = b;
        b = a;
        a = tmp;
    }

    //a���� b������ ���� ���� 
    for (int i = a; i <= b; i++) {
        answer += i;
    }

    return answer;
}

int main() {
    int a = 3;
    int b = 5;
    int result = solution(a, b);

    printf("%d�� %d ���� ���ڵ��� ���� %d�Դϴ�.\n", a, b, result);

    a = 9;
    b = 2;
    result = solution(a, b);

    printf("%d�� %d ���� ���ڵ��� ���� %d�Դϴ�.\n", a, b, result);


}