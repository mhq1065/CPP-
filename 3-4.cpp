#include <iostream>
#include <sstream>
#include <string>
using namespace std;
const int MAX = 100;
class set {
protected:
    int s[MAX];
    int length;

public:
    set() : length(0){};
    void setinput(int p) {
        if (get(p)) {
            return;
        }
        s[length++] = p;
    }
    bool get(int p) {
        for (int i = 0; i < length; i++) {
            if (s[i] == p) {
                return true;
            }
        }
        return false;
    }
    set operator*(set &t) {
        set k;
        for (int i = 0; i < length; i++) {
            if (t.get(s[i])) {
                k.setinput(s[i]);
            }
        }
        return k;
    }
    set operator-(set &t) {
        set k;
        for (int i = 0; i < length; i++) {
            if (!t.get(s[i])) {
                k.setinput(s[i]);
            }
        }
        return k;
    }
    set operator+(set &t) {
        set k;
        for (int i = 0; i < length; i++) {
            k.setinput(s[i]);
        }
        for (int i = 0; i < t.length; i++) {
            k.setinput(t.s[i]);
        }
        return k;
    }
    void display() {
        for (int i = 0; i < length - 1; i++) {
            cout << s[i] << ' ';
        }
        cout << s[length - 1] << endl;
    }
};

int main() {
    set a;
    set b;
    // int t;
    char t1;
    // while ((t1 = cin.get()) != '\n') {
    //     if (t1 == ' ') {
    //         continue;
    //     }
    //     cin.unget();
    //     cin >> t;
    //     a.setinput(t);
    // }
    // while ((t1 = cin.get()) != '\n') {
    //     if (t1 == ' ') {
    //         continue;
    //     }
    //     cin.unget();
    //     cin >> t;
    //     b.setinput(t);
    // }
    int i = 0;
    int t;
    string input;
    stringstream ss;
    getline(cin, input);
    ss.str(input);
    while (ss >> t) {
        a.setinput(t);
    }
    ss.clear();
    getline(cin, input);
    ss.str(input);
    while (ss >> t) {
        b.setinput(t);
    }
    t1 = cin.get();
    if (t1 == '*') {
        (a * b).display();
    } else if (t1 == '+') {
        (a + b).display();
    } else {
        (a - b).display();
    }
    return 0;
}
