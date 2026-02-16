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

    cout << reverseArray(myArr, SIZE);

    delete[] myArr;
    return 0;
}

string* reverseArray(string* arr, int size) {
    string* reversedArr{new string[size]};
    for (int i{size}; i > 0; --i) {
        *(arr + i) = *reversedArr++;
    }
    return reversedArr;
}
