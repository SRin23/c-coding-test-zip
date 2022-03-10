#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//math.h������� �߰�(pow, sqrt���)
#include <math.h>

long long solution(long long n) {
    long long answer = 0;

    //n�� �������� �������� �Ǻ�
    if (sqrt(n) == (int)sqrt(n)) {
        //sqrt(n)+1�� ����
        answer = pow(sqrt(n) + 1, 2);
    }
    else {
        //�ƴϸ� -1��ȯ
        answer = -1;
    }
    return answer;
}
//���� : https://jun01.tistory.com/56

int main() {
    long long result = solution(121);
    printf("121�� ������+1�� ���� : %lld\n", result);

    result = solution(3);
    printf("3�� ������+1�� ���� : %lld\n", result);

}