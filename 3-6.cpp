#include <iostream>
using namespace std;
template <typename T>
T min(T x[], int len) {
    T min = x[0];
    for (int i = 1; i < len; i++) {
        min = min < x[i] ? min : x[i];
    }
    return min;
}
template <typename T>
int length(T &arr) {
    return sizeof(arr) / sizeof(arr[0]);
}
int main() {
    int s1[] = {1, 3, 2, 4, 5};
    float s2[] = {1.3, 2, 3.5, 0.1, 6.2};
    cout << length(s1) << endl;
    cout << min(s1, length(s1)) << endl;
    cout << min(s2, length(s2));
    return 0;
}