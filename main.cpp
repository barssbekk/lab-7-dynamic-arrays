// COMSC-210 | Lab 7 | Barsbek
#include <iostream>
#include <string>

using namespace std;

string* reverseArray(string* arr, int size);
void displayArray(const string* arr, int size);

int main() {
    const int SIZE{5};

    string* myArr{new string[SIZE]};
    *(myArr + 0) = "Hayes";
    *(myArr + 1) = "Alex";
    *(myArr + 2) = "Morgan";
    *(myArr + 3) = "Nathan";
    *(myArr + 4) = "Arisu";

    cout << "Original array: ";
    displayArray(myArr, SIZE);

    reverseArray(myArr, SIZE);
    cout << "Reversed array: ";
    displayArray(myArr, SIZE);

    delete[] myArr;
    return 0;
}

// reverseArray() reverses the elements of a dynamic array
// arguments: string* arr, int size
// return: pointer to the reversed array
string* reverseArray(string* arr, int size) {
    string temp{};
    for (int i{0}; i < size / 2; ++i) {
        temp = *(arr + i);
        *(arr + i) = *(arr + (size - 1) - i);
        *(arr + (size - 1) - i) = temp;
    }
    return arr;
}

// displayArray() outputs arrays
// arguments: const string* arr, int size
void displayArray(const string* arr, int size) {
    for (int i{0}; i < size; ++i)
        cout << *(arr + i) << " ";
    cout << '\n';
}
