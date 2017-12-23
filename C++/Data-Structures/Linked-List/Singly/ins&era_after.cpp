#include <iostream>
#include <forward_list>

using namespace std;
using std::endl;

int main() {

    forward_list<int> flist = {10, 25, 77, 102};
    forward_list<int>::iterator it;

    it = flist.insert_after(flist.before_begin(), 99);
    
    //cant do because removes iterator
    //flist.pop_front();

    //FORM iterator = list_name.insert_after(iterator, # of elems, value for elems);
    it = flist.insert_after(it, 4, 101);

    cout << endl;
    cout << "FLIST: ";
    for (int&a : flist) {
        cout << a << " ";
    }
    cout << endl << endl;

    return 0;
}