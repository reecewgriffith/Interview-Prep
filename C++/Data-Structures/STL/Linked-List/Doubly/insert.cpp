#include <iostream>
#include <list>

using namespace std;

void printList(list<int> listy) {
    cout << endl << "LIST: ";
    for (int&a : listy) {
        cout << a << " ";
    }
    cout << endl << endl;
}

int main() {
    list<int> listy;
    list<int>::iterator it;

    for (int i = 0; i < 5; i++) {
        listy.push_back(i*100);
    }

    printList(listy);

    it = listy.begin();
    cout << "ITERATOR: " << *it << endl << endl;
    it++;

    cout << "ITERATOR++: " << *it << endl << endl;

    listy.insert (it,10); //insert element of value 10 before iterator
    //^^^ iterator will remain on element of value 100
    printList(listy);
    listy.insert (it,2,20); //insert 2 elements of value 20 before iterator
    printList(listy);

    return 0;
}