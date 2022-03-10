#include<iostream>
using namespace std;

int main(){
	int N = 0;
	cin >> N;
	int max = -1;
	int min = 100;
	int* arr = (int *)malloc(sizeof(int) * sizeof(N));
	for (int i = 0; i < N; i++) {
		int a = 0;
		cin >> a;
		arr[i] = a;
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] >= max) {
			max = arr[i];
		}
		if (arr[i] <= min) {
			min = arr[i];
		}
	}
	cout << max << ", " << min << endl;
}