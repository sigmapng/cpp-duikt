#include <iostream>

using namespace std;

//task 1
void sortAscending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortArray() {
    cout << "Hi! There is array of 12 numbers sorted in ascending and descending order" << endl;
    int arr[13] = {5, 10, 3, 7, 12, 8, 9, 14, 2, 6, 1, 4, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortAscending(arr, size);
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    sortDescending(arr, size);
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;
}

//task 2
void changeArraysNegativeValues(){
    int arr[7] = {1,-5,4,-10,-3,2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (i < 0) {
            i = 0;
        }
        cout << " " << arr[i];
    }
    
}

int main() {
    bubbleSortArray();
    changeArraysNegativeValues();

    return 0;
}