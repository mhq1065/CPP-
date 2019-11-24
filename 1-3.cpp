#include <iostream>
using namespace std;

int main() {
    int x, result = 0;
    cin >> x;
    while (x != -1) {
        result += x;
        cin >> x;
    }
    cout << result << endl;
    return 0;
}