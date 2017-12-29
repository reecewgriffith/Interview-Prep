#include <iostream>
#include <set>

using namespace std;

int main () {
    set<int> myset;
    set<int>::iterator it;
    
    // set some initial values:
    for (int i=1; i<=5; ++i) {
        myset.insert(i * 100);
    }

    // no new element inserted
    myset.insert(20);

    int myints[]= {5,10,15};              // 10 already in set, not inserted
    myset.insert (myints,myints+3);

    myset.erase(15);

    it = myset.find(300);
    myset.erase(it, myset.end());

    //notice ordering in printing
    //bc its an ordered set
    cout << "myset contains: ";
    for (it=myset.begin(); it!=myset.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Is value 5 in my set?" << endl;
    cout << "ANSWER: ";
    if (myset.count(5) != 0) {
        cout << "__yes__";
    } else {
        cout << "__no__";
    }
    cout << endl;

    cout << "Is value 77 in my set?" << endl;
    cout << "ANSWER: ";
    if (myset.count(77) != 0) {
        cout << "__yes__";
    } else {
        cout << "__no__";
    }
    cout << endl;

    cout << "SET SIZE: " << myset.size() << endl;

    return 0;
}