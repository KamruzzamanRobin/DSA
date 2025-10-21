# include<iostream>
using namespace std;

void insertionSort(int array[], int n) {
    for(int i = 1; i < n ; i++) {
        int current = array[i];
        int previous = i - 1;
        while(previous >= 0 && current < array[previous]) {
            array[previous + 1] = array[previous];
            previous--;
        }
        array[previous + 1] = current;
    }
}

void printArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}

int main() {
    int n = 5;
    int array[] = {4,1,5,2,3};

    insertionSort(array, n);
    printArray(array, n);
}