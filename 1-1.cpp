#include <iostream>
using namespace std;
//我想sha了写题目的人，闲着没事加鬼的逗号
//害得我错了3次
// f**k
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double max = a;
    max = (max > b) ? max : b;
    max = (max > c) ? max : c;
    cout << max << endl;
    return 0;
}
