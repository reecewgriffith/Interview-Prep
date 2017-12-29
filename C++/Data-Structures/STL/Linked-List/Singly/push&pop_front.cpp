//singly linked list
//AKA forward list

#include <iostream>
#include <forward_list>

/* ONLY IMPORT FOR DATA STRUCTURE */
using std::forward_list;

using std::cout;
using std::endl;

int main() {
    //declaration of forward list
    forward_list<int> flist1;

    //direct assignment of values with assign()
    flist1.assign({4, 9, 5});

    //Display flists
    cout << "FLIST1: " << endl;
    for (int&a : flist1) {
        cout << a << " ";
    }
    cout << endl << endl;

    //front element
    cout << "FLIST1 FRONT(): " << flist1.front() << endl << endl;
    flist1.push_front(100);
    cout << "FLIST1 after push_front(100): " << endl;
    //print flist3 like the others
    cout << "FLIST1: " << endl;
    for (int&c : flist1) {
        cout << c << " ";
    }
    cout << endl << endl;

    flist1.pop_front();
    cout << "FLIST1 after pop_front(): " << endl;
    //print flist3 like the others
    cout << "FLIST1: " << endl;
    for (int&c : flist1) {
        cout << c << " ";
    }
    cout << endl << endl;

    return 0;
}