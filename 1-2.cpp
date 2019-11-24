#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    if (a == 1) {
        cout << "1" << endl;
    } else {
        cout << "-1" << endl;
    }
    return 0;
}