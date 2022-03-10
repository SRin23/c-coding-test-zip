#include<iostream>
using namespace std;

int main() {
	int H = 0;
	int M = 0;

	cin >> H >> M;
	
	if (M - 45 < 0) {
		cout << H << endl;
		cout << H + (M - 45) << endl;
	}
	else {
		cout << H << endl;
		cout << M - 45 << endl;
	}
	return 0;
}