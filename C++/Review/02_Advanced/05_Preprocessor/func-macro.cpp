#include <iostream>

using namespace std;

#define Min(a, b) ((a < b) ? a : b)

int main() {
    int a = 5;
    int b = 7;
    cout << "Min of A and B: " << Min(a, b) << endl;
    
    return 0;
}