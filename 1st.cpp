# include<iostream>
using namespace std;

int main() {
    int array[] = {1,2,3,4, 5, 6,7,8,9,10, 11,12};
    int size = sizeof(array) / sizeof(int);

    cout << "Original Array\n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    int start = 0, end = size -1;
    while( start < end) {
        swap(array[start], array[end]);
        start++;
        end--;
    }
    cout <<"\nReverse Array\n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}