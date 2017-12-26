//O(n) time and space

#include <iostream>

using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int size) {

    int min;
    for (int i = 0; i < size; i++) {

        min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        swap(&arr[min], &arr[i]);
    }

}

int main() {

    int arr[] = {10, 7, 9, 102, 155, 81, 67, 4, 0, 31};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, size);

    for (int z = 0; z < size; z++) {
        cout << arr[z] << " ";
    }

    return 0;
}