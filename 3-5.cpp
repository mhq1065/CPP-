#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

class Triangle {
    float x, y, z;
    float s;

public:
    Triangle(float x, float y, float z) : x(x), y(y), z(z) {
        float p;
        p = (x + y + z) / 2;
        s = sqrt(p * (p - x) * (p - y) * (p - z));
    };
    bool operator<(Triangle &a) {
        if (s < a.s) {
            return true;
        }
        return false;
    }
    void display() {
        cout << s;
    }
};

int main() {
    float x, y, z;
    cin >> x >> y >> z;
    Triangle a(x, y, z);
    cin >> x >> y >> z;
    Triangle b(x, y, z);
    cin >> x >> y >> z;
    Triangle c(x, y, z);
    Triangle *max=&a,*mid=&b,*min=&c;
    if (*max<*mid)
    {
        swap(max, mid);
    }
    if (*mid<*min)
    {
        swap(mid, min);
    }
    if (*max<*mid)
    {
        swap(max, mid);
    }
    min->display();
    cout << " ";
    mid->display();
    cout << " ";
    max->display();

    return 0;
}