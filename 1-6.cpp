#include <iostream>
#include <stdio.h>
using namespace std;

class date {
private:
    int year, month, day;

public:
    date(int year, int month, int day) : year(year), month(month), day(day){};
    void print() { cout << year << "年" << month << "月" << day << "日" << endl; }
};

int main() {
    int a, b, c;
    cin >> a;
    cin.ignore(1, ',');
    cin >> b;
    cin.ignore(1, ',');
    cin >> c;
    date d(a, b, c);
    d.print();
    return 0;
}
