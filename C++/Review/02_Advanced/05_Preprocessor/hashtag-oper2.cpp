#include <iostream>
#include <string>

using namespace std;

#define concat(a, b) a ## b

int main() {

    int xy = 100;
    string s1 = "hello!";

    cout << concat(x, y) << endl;
    cout << concat(s, 1) << endl;

    return 0;
}