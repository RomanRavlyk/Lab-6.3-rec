#include <iostream>
#include <cmath>

using namespace std;

void squareArray(int* inputArray, int length, int i);
void printArray(int* array, int size, int i);

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

void squareArray(int* inputArray, int length, int i) {
    if (i < length) {
        inputArray[i] = inputArray[i] * inputArray[i];
    }
    else return;
    return (inputArray[i], squareArray(inputArray, length, i + 1));
}

void printArray(int* array, int size, int i) {
    if (i < size) {
        printf("%d ", array[i]);
    }
    else return;
    return printArray(array, size, i + 1);
}