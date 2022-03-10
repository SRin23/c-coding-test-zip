#include<iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    cin >> a >> b;

    int fb = b % 10;
    int sb = (b % 100) / 10;
    int tb = b / 100;

    /*cout << fb << endl;
    cout << sb << endl;
    cout << tb << endl;*/

    int result1 = fb * a;
    int result2 = sb * a;
    int result3 = tb * a;

    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;

    int result = result1 + (result2 * 10) + (result3 * 100);
    cout << result;

    return 0;
}