#include <iostream>
using namespace std;

class Rectangle {
protected:
    float length, width;

public:
    Rectangle(float length, float width) : length(length), width(width){};
    float area() {
        return length * width;
    }
};
class Cuboid : public Rectangle {
protected:
    float height;

public:
    Cuboid(float length, float width, float height) : Rectangle(length, width), height(height){};
    float Vol() {
        return height * length * width;
    }
};

int main() {
    float a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    Rectangle r(a, b);
    Cuboid q(c, d, e);
    cout << r.area() << " " << q.Vol();
    return 0;
}