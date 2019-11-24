#include <iostream>
using namespace std;
const float PI = 3.14;
class shape {
    virtual void display_area() = 0;
};
class rectangle : shape {
    int x, y;

public:
    rectangle(int x, int y) : x(x), y(y){};
    void display_area() {
        cout << x * y << endl;
    }
};
class circle : shape {
    int r;

public:
    circle(int r) : r(r){};
    void display_area() {
        cout << r * r * PI << endl;
    }
};
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    rectangle r(x, y);
    circle m(z);
    r.display_area();
    m.display_area();
    return 0;
}