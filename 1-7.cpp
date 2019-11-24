#include <iostream>
using namespace std;

class Rectangle {
 private:
  double a_x, a_y, b_x, b_y;

 public:
  Rectangle(double a, double b, double c, double d)
      : a_x(a), a_y(b), b_x(c), b_y(d){};
  double c() { return 2 * (b_x + b_y - a_x - a_y); }
  double s() { return (b_x - a_x) * (b_y - a_y); }
};

int main() {
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  Rectangle r(a, b, c, d);
  cout << r.c() << endl;
  cout << r.s() << endl;
  return 0;
}