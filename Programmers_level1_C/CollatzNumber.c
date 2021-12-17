//�ݶ��� ����
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;

    //num����� int���� �ִ븦 �Ѿ �� �����Ƿ� long�� ���(num ����)
    long cnum = num;

    //cnum�� 1�� �ɶ����� �ݺ�
    while (cnum != 1) {
        //�ݺ� ����� answer+1
        answer++;

        //cnum�� ¦���� 2�� ����
        if (cnum % 2 == 0) {
            cnum /= 2;
        }

        //cnum�� Ȧ���� 3�� ���ϰ� 1�� ����
        else {
            cnum = (cnum * 3) + 1;
        }

        //����, 500ȸ �Ѱ� �ݺ��ص� ���� ������ ������ -1�� ��ȯ
        if (answer == 500) {
            answer = -1;
            break;
        }
    }

    return answer;
}

int main() {
    int result = solution(6);
    printf("%d�� �� : %d\n", 6, result);

    result = solution(16);
    printf("%d�� �� : %d\n", 16, result);

    result = solution(626331);
    printf("%d�� �� : %d\n", 626331, result);

}