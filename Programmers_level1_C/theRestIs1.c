#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    //n이 3부터 1,000,000이므로 i는 3의 나머지를 1로 만드는 2부터 시작되어야한다.
    //만약, 3부터 시작할 경우 3은 어떠한 값도 가질 수 없으므로 원하는 값을 구할 수 없다.
    
    //n의 나머지를 1로 만드는 최소값은 n보다 작을 것이므로 for문을 2~n까지 돌렸다.
    for (int i = 2; i < n; i++) {
        //만약, n%i가 1이라면 바로 break를 하여 조건에 부합하는 가장 처음 만나는 i값을 answer에 저장한다.
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
    printf("%d의 나머지를 1로 만드는 가장 작은 수는 %d입니다.", n, result);

    int n2 = 3;
    int result2 = solution(n);
    printf("%d의 나머지를 1로 만드는 가장 작은 수는 %d입니다.", n2, result2);

    return 0;
}