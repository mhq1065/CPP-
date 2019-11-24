#include <cmath>
#include <iostream>
#include <stdio.h>

using namespace std;

class Point {
private:
  double x, y;

public:
  Point(double x, double y) : x(x), y(y){};
  double distance(Point p) {
    return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
  }
};

int main() {
  double a, b;
  cin >> a >> b;
  Point p1(a, b);
  cin >> a >> b;
  Point p2(a, b);
  printf("%.2f", p1.distance(p2));
  return 0;
}
