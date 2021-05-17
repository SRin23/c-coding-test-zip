#include<iostream>
using namespace std;

int main() {
    int C = 0;
    cin >> C;

    double percent;
    int N = 0;
    int sum = 0;
    int scores;

    for (int i = 0; i < C; i++) {
        cin >> N;
        int scores[N] = { 0 };
        for (int i = 0; i < N; i++) {
            cin >> scores[i];
            sum += scores[i];
        }
    }
    double avg = (double)sum / N;
    for (int i = 0; i < N; i++) {
        if (avg <= scores[i]) {
            percent++;
        }
    }
    printf("%.3f", (percent / N) * 100);
}