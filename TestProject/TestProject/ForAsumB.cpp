#include<iostream>
using namespace std;
int main() {
	int su = 0;
	int a = 0; 
	int b = 0;
	cin >> su;
	for (int i = 0; i < su; i++) {
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}
