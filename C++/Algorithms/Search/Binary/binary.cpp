/*
    time: O(logn)
    space: O(1)

    Special Notes:
        - Array must be sorted (unlike linear).
*/

#include <iostream>

using namespace std;

int iterativeBinarySearch(int arr[], int l, int r, int find);
int recursiveBinarySearch();

int main() {
    //odd # of elems (9)
    int arrO[] = {1, 7, 9, 36, 55, 102, 177, 225, 308};
    int find = 36;
    int missing = 105;
    int l = 0;
    int r = 8;

    cout << iterativeBinarySearch(arrO, l, r, find) << endl;
    cout << iterativeBinarySearch(arrO, l, r, missing) << endl;

    //even # of elems (8)
    int arrE[] = {5, 22, 32, 86, 97, 165, 201, 275};
    int find2 = 275;
    int missing2 = ;
    int l = 0;
    int r = 7;
    cout << iterativeBinarySearch(arrO, l, r, find) << endl;
    cout << iterativeBinarySearch(arrO, l, r, missing) << endl;


    return 0;
}

int iterativeBinarySearch(int arr[], int l, int r, int find) {

    while (l <= r) {
        
        int mid = l + (r - 1)/2;

        if (arr[mid] == find) {
            return mid;
        }
        if (arr[mid] < find) {
            l = mid + 1;
        }
        else /*if (arr[mid] > find)*/ {
            r = mid - 1;
        }
    }
    return -1;

}

int recursiveBinarySearch() {
    return 0;
}