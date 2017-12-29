#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> listy;

    listy.push_front(100);
    listy.push_front(100);
    listy.push_front(100);
    listy.push_front(150);
    listy.push_front(200);
    listy.push_front(250);
    listy.push_back(999);
    listy.push_back(777);

    cout << endl << "PUSHES ONLY!" << endl;
    cout << "A: ";
    for (int&a : listy) {
        cout << a << " ";
    }
    cout << endl << endl;

    listy.pop_back();
    listy.pop_front();

    cout << endl << "POPS AND PUSHES!" << endl;
    cout << "A: ";
    for (int&a : listy) {
        cout << a << " ";
    }
    cout << endl << endl;

    cout << "FRONT: " << listy.front() << endl;
    cout << "BACK: " << listy.back() << endl << endl;

    listy.remove(100);
    cout << "AFTER REMOVE(100): ";
    cout << "A: ";
    for (int&a : listy) {
        cout << a << " ";
    }
    cout << endl << endl;

    cout << "IS THE LIST EMPTY? " << endl;
    if (listy.empty()) {
        cout << "-> Yes" << endl;
    } else {
        cout << "-> No" << endl;
    }
    cout << endl;

    return 0;
}