#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    if (a > 90) {
        cout << "A" << endl;
    }
    if (a > 70 && a <= 90) {
        cout << "B" << endl;
    }
    if (a >= 40 && a <= 70) {
        cout << "C" << endl;
    }
    if (a <40) {
        cout << "F" << endl;
    }
}