#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

class Line;
class Point;

class Point {
private:
    float x, y;

public:
    Point(float x, float y) : x(x), y(y){};
    friend float dist(Point &p, Line &l);
};
class Line {
private:
    float A, B, C;

public:
    Line(float A, float B, float C) : A(A), B(B), C(C){};
    friend float dist(Point &p, Line &l);
};
float dist(Point &p, Line &l) {
    float distance;
    distance = abs(p.x * l.A + p.y * l.B + l.C) / sqrt(l.A * l.A + l.B * l.B);
    return distance;
}

int main() {
    float x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    Point p(x, y);
    Line l(a, b, c);
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << dist(p, l);
    return 0;
}
