#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const& Max(T const& a, T const& b) {
    return a < b ? a:b;
}

int main() {
    int i = 77;
    int j = 122;
    cout << "Max: " << Max(i, j) << endl;

    double a = 29.61;
    double b = 14.45;
    cout << "Max: " << Max(a, b) << endl;

    string x = "Hello";
    string y = "World";
    cout << "Max: " << Max(x, y) << endl;

    return 0;
}