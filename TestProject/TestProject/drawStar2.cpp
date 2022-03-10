#include<iostream>
using namespace std;

int main() {
	int num = 0;
	cin >> num;
	
	for (int i = 1; i <= num; i++) {
		for (int j = num - i; j > 0; j--) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}