// COMSC-210 | Lab 7 | Barsbek
#include <iostream>
#include <string>

using namespace std;

string* reverseArray(string* arr, int size);
void populateArr(string* arr, int size);

int main() {
    const int SIZE{5};

    string* myArr{new string[SIZE]};
    *(myArr + 0) = "Hayes";
    *(myArr + 1) = "Alex";
    *(myArr + 2) = "Morgan";
    *(myArr + 3) = "Nathan";
    *(myArr + 4) = "Arisu";

    cout << reverseArray(myArr, SIZE); // Returns a pointer
    cout << *(reverseArray(myArr, SIZE));

    delete[] myArr;
    return 0;
}

string* reverseArray(string* arr, int size) {
    string temp{};
    for (int i{0}; i < size / 2; ++i) {
        temp = *(arr + i);
        *(arr + i) = *(arr + (size - 1) - i);
        *(arr + (size - 1) - i) = temp;
    }
    return arr;
}
