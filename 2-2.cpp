#include <iostream>
#include <stdio.h>
using namespace std;
class Time;
class Date {
    friend class Time;

private:
    int year, month, day;

public:
    Date(int year, int month, int day) : year(year), month(month), day(day) {}
};

class Time {
private:
    int hour, min, sec;

public:
    Time(int hour, int min, int sec) : hour(hour), min(min), sec(sec){};
    void display(Date &d) {
        printf("%d/%d/%d\n", d.year, d.month, d.day);
        printf("%d:%d:%d\n", hour, min, sec);
    }
};

int main() {
    int year, month, day, hour, min, sec;
    cin >> year >> month >> day >> hour >> min >> sec;
    Date d(year, month, day);
    Time t(hour, min, sec);
    t.display(d);
    return 0;
}