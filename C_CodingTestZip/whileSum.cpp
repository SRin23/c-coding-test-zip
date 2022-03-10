#include<iostream>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	while (N>=0) {
		int a = 0;
		cin >> a;
		N = a - N;
	}
	return 0;
}