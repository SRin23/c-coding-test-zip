//������ �ݾ� ���ϱ�
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = 0;

    //���̱ⱸ�� N �� ° �̿��Ѵٸ� ���� �̿���� N�踦 �ޱ�� �Ͽ����ϴ�
    //���̱ⱸ�� Ÿ�� Ƚ���� ���� Ƚ��*price��ŭ�� �Һ�˴ϴ�.
    for (int i = 1; i <= count; i++) {
        answer += (price * i);
    }
    //���� ���� �������� �ʴٸ� 0�� return�մϴ�.
    if (answer <= money) {
        return 0;
    }
    //�ʿ��� ������ �ڽ��� ������ �ִ� ���� ���� ������ �ݾ��� ���մϴ�.
    answer = answer - money;
    //������ �ݾ��� return�մϴ�.
    return answer;
}

int main() {
    int price = 3;
    int money = 20; 
    int count = 4;

    //solution�� long long �����̹Ƿ� long long������ ������ ���� �޽��ϴ�.
    long long result = solution(price, money, count);

    //long longŸ���� ������´� %llu�̴�.
    printf("���̱ⱸ�� Ÿ�� ���� ������ �ݾ��� %llu�� �Դϴ�.", result);
    return 0;
}