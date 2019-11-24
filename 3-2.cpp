#include <iostream>
using namespace std;
int gcd(int m, int n) {
    return n == 0 ? m : gcd(n, m % n);
}
class fac {
    int x, y;

public:
    fac(int x = 0, int y = 1) : x(x), y(y){};
    void display() {
        cout << x << '/' << y << endl;
    }
    void op() {
        int t = gcd(x, y);
        x /= t;
        y /= t;
        if (y < 0) {
            y = -y;
            x = -x;
        }
    }
    fac operator+(fac &a) {
        fac s;
        int t;
        s.y = y * a.y;
        s.x = y * a.x + x * a.y;
        s.op();
        return s;
    }
    fac operator-(fac &a) {
        fac s;
        int t;
        s.y = y * a.y;
        s.x = -y * a.x + x * a.y;
        s.op();
        return s;
    }
};
int main() {
    int a, b, c, d;
    a = 1;
    b = 2;
    c = 1;
    d = 3;
    fac m(a, b);
    fac n(c, d);
    (m + n).display();
    (m - n).display();
    return 0;
}