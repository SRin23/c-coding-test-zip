#include<iostream>
using namespace std;

int main() {
	int N = 0;	//������ ����
	int X = 0;	//����
	cin >> N >> X;

	int* A = (int*)malloc(N * sizeof(int));

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < N; i++) {
		if (A[i] < X) {
			cout << A[i] << " ";
		}
	}
	return 0;
}