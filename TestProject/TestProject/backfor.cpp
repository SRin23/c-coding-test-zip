#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int num = 0;
	cin >> num;

	for (int i = num; i >= 1; i++) {
		cout << i << "\n";
	}
	return 0;
}