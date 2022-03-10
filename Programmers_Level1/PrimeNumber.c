#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool PrimeNumber(int num) {
    for (int i = 2; i < num-1; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int solution(int nums[], int nums_len) {
    int answer = 0;
    int val;
    for (int i = 0; i < nums_len; i++) {
        for (int j = i + 1; j < nums_len; j++) {
            for (int r = j + 1; r < nums_len; r++) {
                val = nums[i] + nums[j] + nums[r];
                if (PrimeNumber(val)) {
                    answer++;
                }
            }
        }
    }
    return answer;
}

int main() {
    int nums[] = { 1, 2, 3, 4 };
    int nums_len = 4;
    printf("%d",solution(nums, nums_len));

    return 0;
}