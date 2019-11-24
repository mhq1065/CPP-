#include <iostream>
using namespace std;
const float PI = 3.14159;
class Point {
protected:
    int x, y;

public:
    Point(int x, int y) : x(x), y(y){};
};

class Circle : public Point {
protected:
    int r;

public:
    Circle(int r, int x, int y) : Point(x,y), r(r){};
    void show(){
        printf("%d %d %.2f", x, y, PI * r * r);
    }
};

int main(){
    int r,x,y;
    cin >> x >> y >> r;
    Circle c(r,x,y);
    c.show();
    return 0;
}
