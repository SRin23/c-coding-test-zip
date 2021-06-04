#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    char* answer = (char*)malloc(sizeof(char) * 3);

    int cnt = 4;    //목요일
    int monthLast[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    char* day[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

    //날짜계산
    for (int i = 0; i < a - 1; i++) {
        cnt += monthLast[i];
    }
    for (int j = 1; j <= b; j++) {
        cnt++;
    }

    answer = day[cnt % 7];
    return answer;
}

int main() 
    {
    int a = 5;
    int b = 24;
    printf("%s", solution(a, b));
    return 0;
    } 