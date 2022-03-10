//���� ���� ���ϱ�
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    //arr�� 0���� �ʱ�ȭ ���Ѿ� �Ѵ�.
    //arr�� ũ�Ⱑ 10�� �迭�� 0~9������ �ε����� ������.
    int arr[10] = { 0, };

    for (int i = 0; i < numbers_len; i++) {
        //numbers�� �� ����
        //printf("%d\n", numbers[i]);
        
        //numbers�� ���� arr�� �ε����� ����Ͽ� �� �ε����� ȣ���Ҷ����� �� 1�� ���� 
        arr[numbers[i]]++;
    }
    for (int i = 0; i < 10; i++) {
        //����, �ѹ��� �Ҹ��� �ʾҴٸ� �ѹ��� ���� �������� �����Ͱ� �����Ƿ� �ʱⰪ�� 0�� ������.
        //����, ���� 0�̸� �迭�ȿ� ���ٴ� ������ �˰�, answer�� ���� ������Ų��.
        if (arr[i] == 0) {
            //printf("%d\n", i);
            answer += i;
        }
    }
    return answer;
}

int main() {
    int numbers[] = { 1,2,3,4,6,7,8,0 };
    int size = sizeof(numbers) / sizeof(int);
    int result = solution(numbers, size);
    printf("��� : %d\n", result);
    return 0;
}