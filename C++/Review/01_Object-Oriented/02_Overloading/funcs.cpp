#include <iostream>

using std::cout;
using std::endl;

class Printer {
    public:
        void print(int i) {
            cout << "INTEGER: " << i << endl;
        }
        void print(double d) {
            cout << "DOUBLE: " << d << endl;
        }
        void print(char c) {
            cout << "CHARACTER: " << c << endl;
        }
};

int main() {
    Printer p;
    int i = 22;
    double d = 17.4;
    char c = 'h';

    p.print(i);
    p.print(d);
    p.print(c);

    return 0;
}