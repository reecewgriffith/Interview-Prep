#include <iostream>

using std::cout;
using std::endl;

class Box {
    public:
        double length;
        double width;
        double height;
};

int main() {
    Box b1;
    Box b2;

    b1.length = 10.0;
    b1.width = 5.0;
    b1.height = 2.5;

    b2.length = 5.0;
    b2.width = 7.5;
    b2.height = 7.75;

    //volume calculations

    //v1
    double vol1 = b1.length * b1.width * b1.height;
    cout << "Volume of b1: " << vol1 << endl;

    //v2
    cout << "Volume of b2: " << b2.length * b2.width * b2.height << endl;

    return 0; 
}