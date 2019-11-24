#include <iostream>
using namespace std;

class Point {
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y){};
    int operator==(Point a) {
        if (x == a.x && y == a.y) {
            return 1;
        }
        return 0;
    }
};
int main() {
    int a, b;
    cin >> a >> b;
    Point m(a, b);
    cin >> a >> b;
    Point n(a, b);
    cout << (m == n) << endl;
    return 0;
}