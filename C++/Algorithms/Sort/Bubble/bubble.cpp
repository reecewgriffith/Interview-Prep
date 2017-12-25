#include <iostream>

using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

}

void bubbleSort(int arr[], int siz) {
    int a;
    int b;

    for (int i = 0; i < siz - 1; i++) {
        for (int j = 0; j < siz - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {

    int arr[] = {1, 65, 221, 0, 25, 99, 5, 20, 12, 9, 8};
    int siz = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, siz);

    for (int z = 0; z < siz; z++) {
        cout << arr[z] << " ";
    }

    return 0;
}