#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int a = 0;
		int b = 0;
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}