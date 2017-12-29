#include <iostream>

using std::cout;
using std::endl;

int main() { 

    //declaration with size 3
    int arr[3];
    arr[0] = 75;
    arr[1] = 19;
    arr[2] = -21;

    //declaration without size but directly initializes values
    //implicit size
    int ra[] = {10, 24, 18, 67};

    //can also only assign a few
    //rest will remain as 0
    int ray[5] = {22, 8, 96};
    cout << "RAY[3/2]: " << ray[3/2] << endl; //same as ray[1], so should be 8

    for (int i = 0; i < sizeof(ray)/sizeof(int); i++) {
        cout << "RAY Looped: " << ray[i] << endl;
    }

    //there are no out of bounds checks so this will not cause an error
    //usually outputs 0 or junk values
    cout << "RAY[-1]: " << ray[-1];
    cout << "RAY[9]: " << ray[9];

    //okay for C but not for C++
    //int arry[2] = {10, 20, 30, 40, 50};

    return 0;
}