#include <iostream>

using namespace std;

class Box {
    public:
        Box() {
            cout << "BUILD" << endl;
        }
        ~Box() {
            cout << "DESTROY" << endl;
        }
};

int main() {
    Box* boxxy = new Box[4];
    delete [] boxxy; //Delete array

    return 0;
}