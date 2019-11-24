#include <iostream>
using namespace std;
template <typename T>
T sum(T x[], int len) {
    T sum = x[0];
    for (int i = 1; i < len; i++) {
        sum += x[i];
    }
    return sum;
}
template <typename T>
int length(T &arr) {
    return sizeof(arr) / sizeof(arr[0]);
}
int main() {
    int s1[] = {1, 3, 2, 4, 5};
    float s2[] = {1.2, 2.2, 3.2, 4.1, 5.0};
    // cout << length(s1) << endl;
    cout << sum(s1, length(s1)) << endl;
    cout << sum(s2, length(s2));
    return 0;
}