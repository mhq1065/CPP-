#include <iostream>
using namespace std;

class rectangle;
class circle {
    friend float totalarea(circle &a, rectangle &b);
    float rad;

public:
    circle(float a):rad(a) {}
};

class rectangle {
    friend float totalarea(circle &a, rectangle &b);
    float x, y;

public:
    rectangle(float a, float b) : x(a), y(b) {}
};

float totalarea(circle &c, rectangle &b) {
    float s;
    s = 3.14 * c.rad * c.rad + b.x * b.y;
    return s;
}

int main() {
    float r, w, h;
    cin >> r >> w >> h;
    circle c(r);
    rectangle rec(w, h);
    cout<<totalarea(c, rec);
    return 0;
}