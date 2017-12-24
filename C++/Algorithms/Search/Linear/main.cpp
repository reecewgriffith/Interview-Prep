/*
    time: O(n)
    space: O(1)
*/

#include <iostream>

using namespace std;

int linearSearch(int arr[], int arr_size, int x);

int main() {
    int arr[] = {1, 7, 5, 9, 22, 177, 65, 8, 10, 4};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int x =22;
    int y = 15;

    linearSearch(arr, arr_size, x);
    cout << endl;
    linearSearch(arr, arr_size, y);
    cout << endl;

    return 0;
}

int linearSearch(int arr[], int arr_size, int find) {
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] == find) {
            cout << find << " found at index: " << i;
            return i;
        }
    }
    cout << find << " not found in array.";
    return -1;
}