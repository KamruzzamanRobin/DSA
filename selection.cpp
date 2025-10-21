# include<iostream>
using namespace std;

void selectionSort(int array[], int n) {
    for(int i = 0; i  < n - 1; i ++) {
        int smallestIndex = i;
        for(int j = i+1; j <= n -1; j ++) {
            if(array[smallestIndex] > array[j]) {
                smallestIndex = j;
            }
        }
        swap(array[i], array[smallestIndex]);
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

    selectionSort(array, n);
    printArray(array, n);
}