#include<iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 0;
	cin >> a >> b;
	if (a > b) {
		cout << ">" << endl;
	}
	else if(a < b) {
		cout << "<" << endl;
	}
	else if(a == b) {
		cout << "==" << endl;
	}
}