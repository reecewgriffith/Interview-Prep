#include <iostream>

using namespace std;

#define mkstr(x) #x

int main() {

    cout << mkstr(Hello) << endl;

    return 0;
}