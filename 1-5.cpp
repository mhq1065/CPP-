#include <iostream>
using namespace std;
bool isprice(int n) {
    if (n == 1) {
        return false;
    } else if (n == 2) {
        return true;
    } else {
        for (int i = 2; i < n / 2 + 1; i++) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    int num = 2;
    while (num<=30)
    {
        if (isprice(num))
        {
            cout << num << " ";
        }
        num++;
    }
    
    return 0;
}