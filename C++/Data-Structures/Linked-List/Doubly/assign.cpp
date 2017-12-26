#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> listy;
    list<int> misty;

    list<int> for_arr;

    listy.assign(7, 100); //7 elements with value 100
    misty.assign (listy.begin(), listy.end()); //makes a copy of first

    int myints[] = {1776, 7, 4};
    for_arr.assign (myints, myints + 3); //only do size of array youre adding

    cout << endl;
    
    cout << "A SIZE: " << listy.size() << endl;
    for (int&a : listy) {
        cout << a << " ";
    }
    cout << endl << endl;

    cout << "B SIZE: " << misty.size() << endl;
    for (int&b : misty) {
        cout << b << " ";
    }
    cout << endl << endl;

    cout << "C SIZE: " << for_arr.size() << endl;
    for (int&c : for_arr) {
        cout << c << " ";
    }
    cout << endl << endl;

    return 0;
}