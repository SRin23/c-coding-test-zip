//��ȭ��ȣ ������
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* phone_number) {
    char* answer = (char*)malloc(sizeof(char) * strlen(phone_number));

    strcpy(answer, phone_number);
    for (int i = 0; i < strlen(phone_number) - 4; i++) {
        answer[i] = '*';
    }
    return answer;
}

int main() {
    char phone[] = "01011112222";
    char* phoneNum = phone;

    char* result = solution(phoneNum);
    printf("����� ��ȭ��ȣ�� %s�Դϴ�.\n", result);

    char phone2[] = "029876543";
    phoneNum = phone2;

    result = solution(phoneNum);
    printf("����� ��ȭ��ȣ�� %s�Դϴ�.\n", result);
    return 0;
}