#include<iostream>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	double max = -1;
	double sum = 0;
	double score[1000] = { 0 };
	for (int i = 0; i<N; i++) {
		cin >> score[i];
		if (score[i] > max) {
			max = score[i];
		}
	}

	for (int i = 0; i < N; i++) {
		score[i] = (score[i] / max) * 100;
		sum += score[i];
	}

	double avg = sum / N;
	printf("%.2f", avg);
	return 0;
}