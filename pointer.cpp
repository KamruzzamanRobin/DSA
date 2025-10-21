# include <iostream>
using namespace std;

int main() {
    int array[] = {1,2,3,4,5};

    int* ptr;
    int* ptr1 = ptr + 1;

    cout << ptr1 - ptr << "\n";
}