#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    //n�� 3���� 1,000,000�̹Ƿ� i�� 3�� �������� 1�� ����� 2���� ���۵Ǿ���Ѵ�.
    //����, 3���� ������ ��� 3�� ��� ���� ���� �� �����Ƿ� ���ϴ� ���� ���� �� ����.
    
    //n�� �������� 1�� ����� �ּҰ��� n���� ���� ���̹Ƿ� for���� 2~n���� ���ȴ�.
    for (int i = 2; i < n; i++) {
        //����, n%i�� 1�̶�� �ٷ� break�� �Ͽ� ���ǿ� �����ϴ� ���� ó�� ������ i���� answer�� �����Ѵ�.
        if (n % i == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

int main() {
    int n = 5;
    int result = solution(n);
    printf("%d�� �������� 1�� ����� ���� ���� ���� %d�Դϴ�.", n, result);

    int n2 = 3;
    int result2 = solution(n);
    printf("%d�� �������� 1�� ����� ���� ���� ���� %d�Դϴ�.", n2, result2);

    return 0;
}