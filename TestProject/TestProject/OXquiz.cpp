#include<iostream>
using namespace std;
int main() {
	int N = 0;
	cin >> N;
	int sum;
	int save = 0;

	for (int i = 0;; i++) {
		char OX[80] = { 0 };
		cin >> OX;
		sum = 0;
		save = 0;
		for (int i = 0; i < sizeof(OX) / sizeof(char); i++) {
			if (OX[i] == 'O') {
				sum = sum + 1;
				save += sum;
			}
			else if (OX[i] == 'X') {
				sum = 0;
			}
			else break;
		}
		cout << save << endl;
	}
	
	return 0;
}