#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(char* words[], int words_len) {
    char* answer = "";
    answer = (char*)malloc(sizeof(words_len+1));

    for(int i = 0, j = 0; i<words_len; i++){
 	    if(sizeof(words[i])/sizeof(int) >= 5){
            answer[j] = words[i];
    	}
    }
    if (answer == NULL) {
        answer = "empty";
    }

    return answer;
}

int main() {
    char* words1[5] = { "my", "favorite", "color", "is", "violet" };
    int words_len1 = 5;
    char* ret1 = solution(words1, words_len1);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

    char* words2[3] = { "yes", "i", "am" };
    int words_len2 = 3;
    char* ret2 = solution(words2, words_len2);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}