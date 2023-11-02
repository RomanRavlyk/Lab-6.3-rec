#include <iostream>
#include <cmath>

using namespace std;


void printArray(int* array, int size, int i);

template <typename T>
T squareArray(T* inputArray, int length, int i) {
    if (i < length) {
        inputArray[i] = inputArray[i] * inputArray[i];
        return squareArray(inputArray, length, i + 1);
    }
    return inputArray[i];
}
int main() {
    int a[] = { 4, 6, 7, 6, 4, 2, 1, 2, 8, 9 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Array Elements: ";
    printArray(a, n, 0);

    squareArray(a, n, 0);

    cout << "\nModified: ";
    printArray(a, n, 0);

    return 0;
}



void printArray(int* array, int size, int i) {
    if (i < size) {
        printf("%d ", array[i]);
    }
    else return;
    return printArray(array, size, i + 1);
}