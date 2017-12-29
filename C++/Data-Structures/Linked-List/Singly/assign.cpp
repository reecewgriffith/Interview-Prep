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

    //declaring a second forward list
    forward_list<int> flist2;

    //direct assignment of values with assign()
    flist1.assign({4, 9, 5});

    //assigning repeating values with assign()
    //5 elements with value 10
    flist2.assign(5, 10);

    //Display flists
    cout << "FLIST1: " << endl;
    for (int&a : flist1) {
        cout << a << " ";
    }
    cout << endl << endl;

    cout << "FLIST2: " << endl;
    for (int&b : flist2) {
        cout << b << " ";
    }
    cout << endl << endl;

    //now lets use some start and end functions
    forward_list<int> flist3;

    //this make a copy of the other flist
    //assigns all values from start to end
    flist3.assign(flist1.begin(), flist1.end());

    //print flist3 like the others
    cout << "FLIST3: " << endl;
    for (int&c : flist3) {
        cout << c << " ";
    }
    cout << endl << endl;

    //front element
    cout << "FLIST3 FRONT(): " << flist3.front() << endl;
    flist3.push_front(100);
    cout << "FLIST3 after push_front(): " << endl;
    //print flist3 like the others
    cout << "FLIST3: " << endl;
    for (int&c : flist3) {
        cout << c << " ";
    }
    cout << endl << endl;

    flist3.pop_front();
    cout << "FLIST3 after pop_front(): " << endl;
    //print flist3 like the others
    cout << "FLIST3: " << endl;
    for (int&c : flist3) {
        cout << c << " ";
    }
    cout << endl << endl;


    return 0;
}