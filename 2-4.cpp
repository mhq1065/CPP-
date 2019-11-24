#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
class Process;
class Sample {
    friend class Process;

private:
    string name;
    int A[5] = {0};

public:
    Sample(int a[5]) {
        name = "";

        for (int i = 0; i < 5; i++) {
            A[i] = a[i];
        }
    };
};

class Process {
public:
    void sortlist(Sample &s) {
        cout << s.name;
        sort(s.A, s.A + 5);
        for (int i = 0; i < 5; i++) {
            cout << s.A[i] << " ";
        }
    };
};

int main() {
    int list[5] = {0};
    for (int i = 0; i < 5; i++) {
        cin >> list[i];
    }
    Sample s(list);
    Process p;
    p.sortlist(s);
    return 0;
}