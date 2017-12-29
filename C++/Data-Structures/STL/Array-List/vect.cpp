//known as vectors in c++

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    
    nums.push_back(5); //inserts at back
    nums.push_back(22);
    nums.push_back(99);
    nums.push_back(88);
    nums.push_back(11);
    
    nums.pop_back(); //removes at back
    
    nums.erase(nums.begin() + 2); //deletes element at index 2
    

    cout << endl << "Printing Vector:" << endl;
    for (int& a : nums) {
        cout << a << " ";
    }
    cout << endl << endl;

    cout << "Vector at index 2: " << nums.at(2) << endl << endl;

    return 0;
}